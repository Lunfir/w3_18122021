#include <stdio.h>


typedef enum
{
    apple   = 2,
    cherry  /*= 8*/,
    peach   /*= 4*/,
} Fruits;


typedef enum
{
    EventA,
    EventB,
    EventC
} Event;

typedef enum
{
    ALT     = 1 << 0,
    CTRL    = 1 << 1,
    SHIFT   = 1 << 2
} Keys;


int main()
{
    Fruits fruit = cherry;

    printf("fruit: %d\n", fruit);
    printf("size: %d\n", sizeof(Fruits));

    ////////////////////////////////////
    // Event inputEvent;

    // scanf("%d", &inputEvent); // 0, 1, 2
    // if (inputEvent == EventA)
    // {
    //     printf("Case A: %d\n", inputEvent);
    // }

    // if (inputEvent == EventB)
    // {
    //     printf("Case B: %d\n", inputEvent);
    // }

    // if (inputEvent == EventC)
    // {
    //     printf("Case C: %d\n", inputEvent);
    // }

    ////////////////////////////////////
    Keys keyMod;

    scanf("%d", &keyMod); // 0, 1, 2
    if (keyMod == ALT)
    {
        printf("ALT: %d\n", keyMod);
    }

    if (keyMod == CTRL)
    {
        printf("CTRL: %d\n", keyMod);
    }

    if (keyMod == SHIFT)
    {
        printf("SHIFT: %d\n", keyMod);
    }

    if (keyMod == (ALT | CTRL))
    {
        printf("ALT+CTRL: %d\n", keyMod);
    }

    if (keyMod & SHIFT)
    {
        printf("SHIFT (at least): %d\n", keyMod);
    }

    return 0;
}