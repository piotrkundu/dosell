#include "StartCommand.h"

void StartCommand::execute() {
    std::cout << "Starting application..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << "Application started and ready to receive commands." << std::endl;
}
