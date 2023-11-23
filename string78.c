#include <stdio.h>

int Max(int x, int y)
{
    return x>y?x:y;
}

int main()
{
    int a = 5;
    int b = 6;

    printf("%d\n", Max(a++, b++));

    return 0;
}