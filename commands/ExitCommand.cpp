#include "ExitCommand.h"

void ExitCommand::execute() {
    std::cout << "Exiting application..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "Application exited." << std::endl;
}
