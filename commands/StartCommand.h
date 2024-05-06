#ifndef STARTCOMMAND_H
#define STARTCOMMAND_H

#include "ICommand.h"

class StartCommand : public ICommand {
public:
    virtual void execute() override;
    virtual bool isExitCommand() const override { return true; }
};

#endif // STARTCOMMAND_H
