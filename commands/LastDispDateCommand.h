#ifndef LASTDISPDATECOMMAND_H
#define LASTDISPDATECOMMAND_H

#include "ICommand.h"

class LastDispDateCommand : public ICommand {
public:
    virtual void execute() override;
};

#endif // LASTDISPDATECOMMAND_H
