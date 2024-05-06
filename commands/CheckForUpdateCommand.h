#ifndef CHECKFORUPDATECOMMAND_H
#define CHECKFORUPDATECOMMAND_H

#include "ICommand.h"

class CheckForUpdateCommand : public ICommand {
public:
    virtual void execute() override;
};

#endif // CHECKFORUPDATECOMMAND_H
