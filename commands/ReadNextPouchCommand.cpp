#include "ReadNextPouchCommand.h"

void ReadNextPouchCommand::execute() {
    std::cout << "Reading next pouch..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(30));
    std::cout << "Next pouch: 2024-05-06 08:00" << std::endl;
}
