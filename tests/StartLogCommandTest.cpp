#include "catch.hpp"
#include "commands/StartLogCommand.h"

TEST_CASE("StartLogCommand execution", "[StartLogCommand]") {
    StartLogCommand command;
    REQUIRE_NOTHROW(command.execute());
}
