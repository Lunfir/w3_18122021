#include <stdio.h>

// Слияние двух сортированных подмассивов в один отсортированный подмассив.
// Первый подмассив от lo до mid не включая mid
// Второй подмассив от mid до hi не включая hi

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

void merge(int array[], int lo, int mid, int hi)
{
    int size = hi - lo;
    int buffer[size];
    int j = mid;
    int k = 0;
    int i = lo;

    for( ; i < mid && j < hi; k++)
    {
        if (array[i] < array[j])
        {
            buffer[k] = array[i];
            i += 1;
        } else 
        {
            buffer[k] = array[j];
            j += 1;
        }
    }

    for ( ; j < hi; j++, k++)
    {
        buffer[k] = array[j];
    }

    for ( ; i < mid; i++, k++)
    {
        buffer[k] = array[i];
    }

    for (k = 0; k < size; k++, lo++)
    {
        array[lo] = buffer[k];
    }
}

void mergeSort(int array[], int lo, int hi)
{
    int mid = (lo + hi) / 2;

    if (mid == lo)
    {
        return;
    }

    mergeSort(array, lo, mid);
    mergeSort(array, mid, hi);
    merge(array, lo, mid, hi);
}


int main()
{
    int array[] = {2, 1, 3, 12, 9, 13, 3, 24, 8};
    print(array, 9);

    mergeSort(array, 0, 9);

    print(array, 9);

    return 0;
}
