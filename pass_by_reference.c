#include <stdio.h>

void LocationPass(int* x) // we take a var and go to x var loc. by '*' and change the value
{
    *x = 20;
}

int main()
{
    int x = 10;
    printf("%d\n", x);

    LocationPass(&x);

    // after change
    printf("%d", x);

    return 0;
}