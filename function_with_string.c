#include<stdio.h>

// we don't need to pass the array location, coz by default pass the array 1st index location and that's why we don't need to use * to find value

// and function can't return the array if we gonna try we can see just 1st index value, so we don't need to use dynamic array if we want to return full array 

void fun(char s[])
{
    printf("%s\n", s);
    int length = strlen(s);
    printf("%d", length);
}

int main()
{
    int n;
    scanf("%d", &n);

    int s[n];

    scanf("%s", s);

    fun(s);

    return 0;
}