#ifndef READNEXTPOUCHCOMMAND_H
#define READNEXTPOUCHCOMMAND_H

#include "ICommand.h"

class ReadNextPouchCommand : public ICommand {
public:
    virtual void execute() override;
};

#endif // READNEXTPOUCHCOMMAND_H
