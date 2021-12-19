#include <iostream>


void foo()
{
    std::cout << "foo()" << std::endl;
}

void foo(int num)
{
    std::cout << "foo(): " << num << std::endl;
}

template <typename T>
T sum(T a, T b)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl; // __FUNCTION__
    
    return a + b;
}

template <typename T, typename U>
T sum(T a, U b)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl; // __FUNCTION__
    
    return a + b;
}


int main()
{
    // foo();
    // foo(12);

    std::cout << "int:    " << sum<int>(42, 12) << std::endl;
    std::cout << "float: " << sum<float>(23.12f, 23.34f) << std::endl;
    std::cout << "double: " << sum<double>(23.12, 23.34) << std::endl;
    std::cout << "int, double:    " << sum<double, int>(42.1, 12) << std::endl;


    return 0;
}
