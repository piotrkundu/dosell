#ifndef STOPLOGCOMMAND_H
#define STOPLOGCOMMAND_H

#include "ICommand.h"

class StopLogCommand : public ICommand {
public:
    virtual void execute() override;
};

#endif // STOPLOGCOMMAND_H
