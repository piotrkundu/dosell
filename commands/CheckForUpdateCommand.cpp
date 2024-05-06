#include "CheckForUpdateCommand.h"

void CheckForUpdateCommand::execute() {
    std::cout << "Checking for updates..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(80));
    std::cout << "No update available." << std::endl;
}
