#include <iostream>
#include <cmath>

struct Point
{
    double x;
    double y;

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
    Point pointA;
    Point pointB;

    pointA.x = 12.2;
    pointA.y = 14.3;

    pointB.x = 10.2;
    pointB.y = 1.3;

    pointA.pointPrint();
    pointB.pointPrint();

    std::cout << "is Equal: " << pointA.pointEqual(pointB) << std::endl;

    return 0;
}
