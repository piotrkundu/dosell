// main.cpp

#include <iostream>
#include <string>
#include <vector>
#include "CommandHandler.h"
#include <thread>

int main(int argc, char* argv[]) {
    std::vector<std::string> initialCommands;
    for (int i = 1; i < argc; ++i) {
        initialCommands.emplace_back(argv[i]);
    }

    // Create promise and future for initial commands
    std::deque<std::promise<void>> promises(initialCommands.size());
    std::deque<std::future<void>> futures;
    for (auto& promise : promises) {
        futures.push_back(promise.get_future());
    }

    CommandHandler commandHandler(std::move(initialCommands), futures);

    std::jthread workerThread([&commandHandler]() {
        commandHandler.processCommands();
    });

    std::string input;
    while (true) {
        std::cout << "Enter command: ";
        std::getline(std::cin, input);

        // Break loop if input is "EXIT"
        if (input == "EXIT") {
            commandHandler.addCommand(input, promises.back());
            break;
        } else {
            // Create a new promise for each command/input
            std::promise<void> newPromise;
            std::future<void> newFuture = newPromise.get_future();
            commandHandler.addCommand(input, newPromise);

            // Wait for the command to complete
            newFuture.wait();
        }
    }

    return 0;
}