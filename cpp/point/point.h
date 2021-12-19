#include <iostream>
#include <cmath>

struct Point
{
    double x;
    double y;

    Point();
    Point(double inX, double inY);
    Point(const Point& other);

    ~Point();

    int pointEqual(Point other);
    double pointDistance(Point other);

    Point operator+(const Point& other);
    Point& operator=(const Point& other);
};

std::ostream& operator<<(std::ostream& os, const Point& obj);
