#include "catch.hpp"
#include "commands/ReadNextPouchCommand.h"

TEST_CASE("ReadNextPouchCommand execution", "[ReadNextPouchCommand]") {
    ReadNextPouchCommand command;
    REQUIRE_NOTHROW(command.execute());
}
