#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a[5][5] = {0};
    int (*p)[4];
    p = a;
    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);

    system("pause");
    return 0;
}