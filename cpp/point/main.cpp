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
    Point pointB = Point(10.2, 1.3);
    Point pointRes;

    pointRes = pointB + pointA;
    // pointRes.operator=(pointA.operator+(pointB));

    // copy constructor
    // Point pointB(pointA);
    // Point pointB = Point(pointA);

    std::cout << "pointRes: " << pointRes << std::endl;
    std::cout << "pointA:   " << pointA << std::endl;
    std::cout << "pointB:   " << pointB << std::endl;

    // pointRes.pointPrint();
    // pointA.pointPrint();
    // pointB.pointPrint();

    // std::cout << "is Equal: " << pointA.pointEqual(pointB) << std::endl;

    return 0;
}
