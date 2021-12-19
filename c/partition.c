#include <stdio.h>


void fill(int inArray[], int inSize)
{
    for (int i = 0; i < inSize; i++)
    {
        inArray[i] = -1;
    }
}

void print(int inArray[], int inSize)
{
    int limit = inSize - 1;

    for (int i = 0; i < limit; i++)
    {
        printf("%d_", inArray[i]);
    }

    printf("%d\n", inArray[limit]);
}

void printSubArray(int inArray[], int lo, int hi)
{
    hi -= 1;
    for (; lo < hi; lo++)
    {
        printf("%d_", inArray[lo]);
    }

    printf("%d\n", inArray[hi]);
}

int partition(int array[], int lo, int hi)
{
    int mid = (lo + hi) / 2;
    int pivotIndex = lo;

    int pivot = array[mid];
    array[mid] = array[hi];
    array[hi] = pivot;

    // elements' check
    for ( ; array[pivotIndex] < array[hi]; pivotIndex++);
    for ( int iterationIndex = pivotIndex + 1; iterationIndex < hi; iterationIndex++ )
    {
        if (array[iterationIndex] < array[hi])
        {
            pivot = array[iterationIndex];

            array[iterationIndex] = array[pivotIndex];
            array[pivotIndex] = pivot;
            pivotIndex += 1;
        }
    }

    // put pivot on its' place
    pivot = array[pivotIndex];
    array[pivotIndex] = array[hi];
    array[hi] = pivot;

    return pivotIndex;
}

void quickSort(int array[], int lo, int hi)
{
    int pivotIndex;

    if (lo >= hi)
    {
        return;
    }

    pivotIndex = partition(array, lo, hi);

    quickSort(array, lo, pivotIndex-1);
    quickSort(array, pivotIndex+1, hi);
}


int main()
{
    // int array[] = {2, 1, 3, 12, 9, 13, 3, 24, 8};
    int array[] = {9, 2, 1, 5, 4, 3, 6};
    
    print(array, 7);

    // printf("pivot index: %d\n", partition(array, 0, 8));

    quickSort(array, 0, 6);

    print(array, 7);

    return 0;
}
