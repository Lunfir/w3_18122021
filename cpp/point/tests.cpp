// https://github.com/catchorg/Catch2/blob/v2.x/docs/tutorial.md#top

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "point.h"

TEST_CASE("construction", "[point]") 
{
    // Point();
    Point a;
    REQUIRE(a.x == 0.0);
    REQUIRE(a.y == 0.0);

    // Point(double inX, double inY);
    Point b(12.3, 23.1);
    REQUIRE(b.x == 12.3);
    REQUIRE(b.y == 23.1);
    
    // Point(const Point& other);
    Point source(5.0, 23.3);
    Point target = source;
    REQUIRE(target.x == 5.0);
    REQUIRE(target.y == 23.3);
}

TEST_CASE("operators", "[point]") 
{
    // Point operator+(const Point& other);
    Point a(1.0, 2.0);
    Point b(3.0, 5.0);
    Point c = a + b;
    REQUIRE(c.x == 4.0);
    REQUIRE(c.y == 7.0);

    // Point& operator=(const Point& other);
    Point source(1.0, 2.0);
    Point target;
    target = source;
    REQUIRE(target.x == 1.0);
    REQUIRE(target.y == 2.0);
}
