#include <stdio.h>

void foo()
{
    printf("foo()\n");
}


int main()
{
    int c = 25;
    int a = 23;
    double d = 43.23;
    int b = 42;
    void(*funcPtr)() = &foo;

    printf("ptr int c:      %llu\n", &c); // 4294954044
    printf("ptr int a:      %llu\n", &a); // 4294954040
    printf("ptr double d:   %llu\n", &d); // 4294954032
    printf("ptr int b:      %llu\n", &b); // 4294954028
    printf("ptr funcPtr:    %llu\n", &funcPtr);
    printf("funcPtr:        %llu\n", funcPtr); // 4299165824

    // stack frame


    return 0;
}