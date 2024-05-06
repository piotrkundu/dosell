#include "StartLogCommand.h"

void StartLogCommand::execute() {
    std::cout << "Logging started." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
}
