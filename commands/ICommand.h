#ifndef ICOMMAND_H
#define ICOMMAND_H

#include <iostream>
#include <chrono>
#include <thread>

class ICommand {
public:
    virtual ~ICommand() {}
    virtual void execute() = 0;
    virtual bool isExitCommand() const { return false; }
};

#endif // ICOMMAND_H
