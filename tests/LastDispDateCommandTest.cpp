#include "catch.hpp"
#include "commands/LastDispDateCommand.h"

TEST_CASE("LastDispDateCommand execution", "[LastDispDateCommand]") {
    LastDispDateCommand command;
    REQUIRE_NOTHROW(command.execute());
}
