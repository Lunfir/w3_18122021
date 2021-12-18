#include <stdio.h>

#define SIZE 3


void fill(double inMatrix[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            inMatrix[i][j] = i;
        }
    }
}

void print(double inMatrix[SIZE][SIZE])
{
    int limit = SIZE - 1;

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < limit; j++)
        {
            printf("%d_%llu__", inMatrix[i][j], &inMatrix[i][j]);
        }
        printf("%d_%llu__\n", inMatrix[i][limit], &inMatrix[i][limit]);
    }
}

int main()
{
    double mat[SIZE][SIZE];

    fill(mat);

    print(mat);

    return 0;
}