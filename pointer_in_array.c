#include<stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++)
    {
        printf("%p\n", &a[i]);
    }

    // a is a pointer, so location to value identify and change, and yah array name is = array 1st value location so we can prove it
    *a = 100;
    *(a+4) = 500;

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}