#include "point.h"

Point::Point()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    this->x = 0;
    this->y = 0;
}

Point::Point(double inX, double inY)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    this->x = inX;
    this->y = inY;
}

Point::Point(const Point& other)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    this->x = other.x;
    this->y = other.y;
}

Point::~Point()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

int Point::pointEqual(Point other) 
{
    return this->x == other.x && this->y == other.y;
}

double Point::pointDistance(Point other) 
{
    return hypot(this->x - other.x, this->y - other.y);
}


Point Point::operator+(const Point& other)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    Point out;

    out.x = this->x + other.x;
    out.y = this->y + other.y;

    return out;
}

Point& Point::operator=(const Point& other)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    this->x = other.x;
    this->y = other.y;

    return *this;
}

std::ostream& operator<<(std::ostream& os, const Point& obj)
{
    os << "(" << obj.x << ", " << obj.y << ")";

    return os;
}