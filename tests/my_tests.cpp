// my_tests.cpp

#include "../catch.hpp"
#include "../src/main.cpp"

TEST_CASE("Addition Test", "[add]")
{
    REQUIRE(add(2, 3) == 5);
    REQUIRE(add(-1, 1) == 0);
    REQUIRE(add(0, 0) == 0);
}
