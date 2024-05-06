#include "catch.hpp"
#include "commands/CheckForUpdateCommand.h"

TEST_CASE("CheckForUpdateCommand execution", "[CheckForUpdateCommand]") {
    CheckForUpdateCommand command;
    REQUIRE_NOTHROW(command.execute());
}
