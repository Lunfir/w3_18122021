#include <stdio.h>


void handlerA(int inInput)
{
    printf("Case A: %d\n", inInput);
}

void handlerB(int inInput)
{
    printf("Case B: %d\n", inInput);
}

void handlerC(int inInput)
{
    printf("Case C: %d\n", inInput);
}


int main()
{
    int input;
    int processor = 42;
    void(*handlers[])(int) = { handlerA, handlerB, handlerC };

    // void(*handlers[3])(int);
    // handlers[0] = handlerA;
    // handlers[1] = handlerB;
    // handlers[2] = handlerC;

    scanf("%d", &input); // 0, 1, 2

    handlers[input](processor);

    return 0;
}