// my_tests.cpp
#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "../catch.hpp"

int add(int a, int b)
{
    return a + b;
}

TEST_CASE("Addition Test", "[add]")
{
    REQUIRE(add(2, 3) == 5);
    REQUIRE(add(-1, 1) == 0);
    REQUIRE(add(0, 0) == 0);
}
