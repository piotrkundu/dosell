#include "LastDispDateCommand.h"

void LastDispDateCommand::execute() {
    std::cout << "Fetching last dispensed date..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Last dispensed date: 2024-05-05 12:00" << std::endl;
}
