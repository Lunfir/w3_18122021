#include <stdio.h>

void fooA()
{
    printf("fooA()\n");
}

void fooB()
{
    printf("fooB()\n");
}

int bar(int inNumber)
{
    printf("bar() %d\n", inNumber);

    return inNumber;
}

int main()
{
    int num = 42;
    int* ptr; // declaration of ptr to int
    ptr = &num;


    void(*funcPtr)(); // declaration of ptr to function  void ????()
    funcPtr = &fooA;
    printf("funcPtr A: %llu\n", funcPtr);
    funcPtr = &fooB;
    printf("funcPtr B: %llu\n", funcPtr);
    (*funcPtr)();


    int(*funcPtrWithParameter)(int); // declaration of ptr to function  int ????(int)
    funcPtrWithParameter = &bar;
    funcPtrWithParameter(42);


    return 0;
}