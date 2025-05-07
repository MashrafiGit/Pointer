#include<stdio.h>

// we don't need to pass the array location, coz by default pass the array 1st index location

// and function can't return the array if we gonna try we can see just 1st index value, so we don't need to use dynamic array if we want to return full array 

void fun(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    fun(a, n);

    return 0;
}