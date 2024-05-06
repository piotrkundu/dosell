#include "catch.hpp"
#include "commands/ExitCommand.h"

TEST_CASE("ExitCommand execution", "[ExitCommand]") {
    ExitCommand command;
    REQUIRE_NOTHROW(command.execute());
}
