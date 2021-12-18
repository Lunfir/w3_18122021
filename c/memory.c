#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int memoryLeak(int inValue)
{
    int* out = (int*)malloc(sizeof(int));
    if (out == NULL)
    {
        return 0; // failure
    }

    *out = inValue;

    return 1; // success 
}

int main()
{
    printf("m4: %d\n", memoryLeak(666));

    // stack
    int stackNum = 42;
    int stackArray[SIZE];

    // heap number
    int* heapNum = (int*)malloc(sizeof(int));
    if (heapNum == NULL)
    {
        return 0;
    }

    *heapNum = 42;

    // heap array
    int* heapArray;
    heapArray = (int*)malloc(SIZE * sizeof(int));
    if (heapArray == NULL)
    {
        return 0;
    }

    printf("stackNum ptr:       %llu\n", &stackNum);
    printf("stackArray ptr:     %llu\n", stackArray);
    printf("heapArray ptr:      %llu\n", &heapArray);

    printf("heapNum:        %llu\n", heapNum);
    printf("heapArray:      %llu\n", heapArray);

    free(heapNum);
    free(heapArray);

    return 0;
}