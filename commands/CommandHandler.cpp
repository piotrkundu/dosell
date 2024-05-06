// CommandHandler.cpp

#include "CommandHandler.h"
#include <iostream>
#include <chrono>
#include <thread>

CommandHandler::CommandHandler(std::vector<std::string> initialCommands, std::deque<std::future<void>>& futures)
    : commands_(std::move(initialCommands)), futures_(futures) {}

void CommandHandler::addCommand(const std::string& command, std::promise<void>& promise) {
    commands_.push_back(command);
    std::future<void> future = promise.get_future();
    futures_.push_back(std::move(future));
}

void CommandHandler::processCommands() {
    while (!commands_.empty()) {
        std::string command = std::move(commands_.front());
        commands_.pop_front();
        
        // Process command
        std::cout << "Processing command: " << command << std::endl;

        // Simulate work
        std::this_thread::sleep_for(std::chrono::seconds(1));

        // Set promise to ready
        futures_.front().promise().set_value();
        futures_.pop_front();
    }
}

std::deque<std::future<void>>& CommandHandler::getFutures() {
    return futures_;
}