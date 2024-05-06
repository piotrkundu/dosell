#include "StopLogCommand.h"

void StopLogCommand::execute() {
    std::cout << "Logging stopped." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
}
