#include <stdio.h>

void print(int inArray[], int inSize)
{
    int limit = inSize - 1;

    for (int i = 0; i < limit; i++)
    {
        printf("%d_", inArray[i]);
    }

    printf("%d\n", inArray[limit]);
}

// coctail version
void bubble(int inArray[], int inSize)
{
    for (int lo = 0, hi = inSize-1; lo <= hi; lo++, hi--)
    {
        // max
        for (int i = lo, j = i + 1; j <= hi; i++, j++)
        {
            if (inArray[i] > inArray[j])
            {
                int tmp = inArray[j];

                inArray[j] = inArray[i];
                inArray[i] = tmp;
            }
        }

        // min
        for (int i = hi, j = i-1; j >= lo; i--, j--)
        {
            if (inArray[i] < inArray[j])
            {
                int tmp = inArray[j];

                inArray[j] = inArray[i];
                inArray[i] = tmp;
            }
        }
    }

}


int main()
{
    int array[] = {6, 5, 12, 1, 13, 34, -97, 23};

    bubble(array, 8);

    print(array, 8);

    return 0;
}
