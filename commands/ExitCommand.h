#ifndef EXITCOMMAND_H
#define EXITCOMMAND_H

#include "ICommand.h"

class ExitCommand : public ICommand {
public:
    virtual void execute() override;
    virtual bool isExitCommand() const override { return true; }
};

#endif // EXITCOMMAND_H
