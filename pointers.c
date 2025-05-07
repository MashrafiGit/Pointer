#include <stdio.h>
int main()
{
    int x = 10;
    printf("%d\n", x);

    // x variable location
    printf("%p\n", &x);

    // if we need to set location on a variable that's would be a pointer variable
    int *ptr = &x;
    printf("%p\n", ptr);

    // if we need we can see the location where we set x variable location
    printf("%p\n", &ptr);

    return 0;
}