#include <iostream>
#include <cmath>

struct Point
{
    double x;
    double y;

    Point()
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        this->x = 0;
        this->y = 0;
    }

    Point(double inX, double inY)
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        this->x = inX;
        this->y = inY;
    }

    Point(const Point& other)
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        this->x = other.x;
        this->y = other.y;
    }

    ~Point()
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }

    int pointEqual(Point other) 
    {
        return this->x == other.x && this->y == other.y;
    }

    double pointDistance(Point other) 
    {
        return hypot(this->x - other.x, this->y - other.y);
    }

    // Point& operator+(const Point& other)
    // {
    //     std::cout << __PRETTY_FUNCTION__ << std::endl;
    //     this->x += other.x;
    //     this->y += other.y;

    //     return *this;
    // }

    Point operator+(const Point& other)
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        Point out;

        out.x = this->x + other.x;
        out.y = this->y + other.y;

        return out;
    }

    Point& operator=(const Point& other)
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        this->x = other.x;
        this->y = other.y;

        return *this;
    }
};

std::ostream& operator<<(std::ostream& os, const Point& obj)
{
    os << "(" << obj.x << ", " << obj.y << ")";

    return os;
}


int main()
{
    // usual constructor
    Point pointA(12.2, 14.3);
    Point pointB(12.2, 14.3);
    Point pointC(12.2, 14.3);

    // copy constructor
    // Point pointRes = Point(pointA);
    // Point pointRes = pointA + pointB + pointC;
    // Point pointRes = (pointA.operator+(pointB)).operator+(pointC);

    // assignment operator
    // Point pointRes;
    // pointRes = pointA; // pointRes.operator=(pointA);

    // std::cout << "pointRes:   " << pointRes << std::endl;
    // std::cout << "pointA:     " << pointA << std::endl;

    return 0;
}
