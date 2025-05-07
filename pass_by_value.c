#include <stdio.h>

void valuePass(x)
{
    x = 20;

    printf("void x: %d\n", x);
    printf("main function x location: %p\n", &x); 
}

int main()
{
    int x = 10;
    valuePass(x);

    printf("main x: %d\n", x);
    printf("main function x location: %p\n", &x);

    return 0;
}