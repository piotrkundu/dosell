#ifndef STARTLOGCOMMAND_H
#define STARTLOGCOMMAND_H

#include "ICommand.h"

class StartLogCommand : public ICommand {
public:
    virtual void execute() override;
};

#endif // STARTLOGCOMMAND_H
