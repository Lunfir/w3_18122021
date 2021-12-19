#include <iostream>


void foo(int num)
{
    std::cout << "foo(): " << num << std::endl;
}

void fooPtr(int* num)
{
    std::cout << "foo(): " << *num << std::endl;
}

void fooRef(int& num)
{
    std::cout << "foo(): " << num << std::endl;
}


int main()
{
    // by value(name)
    int a = 42;
    int b = 12;
    foo(a);

    // by pointer
    int* ptr;
    ptr = &a;
    ptr = &b;
    fooPtr(ptr);

    // by reference
    int& ref = a;
    ref = b; // std::cout << "a: " << a << std::endl; 42 -----> 12
    fooRef(ref);

    return 0;
}
