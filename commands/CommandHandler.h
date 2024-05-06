// CommandHandler.h

#ifndef COMMANDHANDLER_H
#define COMMANDHANDLER_H

#include <vector>
#include <string>
#include <deque>
#include <future>

class CommandHandler {
public:
    CommandHandler(std::vector<std::string> initialCommands, std::deque<std::future<void>>& futures);
    void addCommand(const std::string& command, std::promise<void>& promise);
    void processCommands();
    std::deque<std::future<void>>& getFutures(); // Added method to get futures

private:
    std::deque<std::string> commands_;
    std::deque<std::future<void>>& futures_;
};

#endif // COMMANDHANDLER_H