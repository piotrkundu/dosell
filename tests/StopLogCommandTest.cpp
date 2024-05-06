#include "catch.hpp"
#include "commands/StopLogCommand.h"

TEST_CASE("StopLogCommand execution", "[StopLogCommand]") {
    StopLogCommand command;
    REQUIRE_NOTHROW(command.execute());
}
