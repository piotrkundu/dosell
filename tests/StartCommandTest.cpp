#include "catch.hpp"
#include "commands/StartCommand.h"

TEST_CASE("StartCommand execution", "[StartCommand]") {
    StartCommand command;
    REQUIRE_NOTHROW(command.execute());
}
