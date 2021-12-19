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

    void pointPrint() 
    {
        std::cout   << "(" 
                    << this->x 
                    << ", "
                    << this->y 
                    << ")" 
            << std::endl;
    }

    int pointEqual(Point other) 
    {
        return this->x == other.x && this->y == other.y;
    }

    double pointDistance(Point other) 
    {
        return hypot(this->x - other.x, this->y - other.y);
    }
};


int main()
{
    // usual constructor
    Point pointA(12.2, 14.3);
    // Point pointB = Point(10.2, 1.3);

    // copy constructor
    // Point pointB(pointA);
    // Point pointB = Point(pointA);
    Point pointB = pointA;

    pointB = pointA;

    pointA.pointPrint();
    pointB.pointPrint();

    std::cout << "is Equal: " << pointA.pointEqual(pointB) << std::endl;

    return 0;
}
