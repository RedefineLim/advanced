#include <stdio.h>
#include <stdlib.h>

void menu()
{
    printf("**************************\n");
    printf("******1.add  2.sub********\n");
    printf("******3.mul  4.div********\n");
    printf("******0.exit      ********\n");
    printf("**************************\n");
}

int Add(int x, int y)
{
    return x+y;
}

int Sub(int x, int y)
{
    return x-y;
}

int Mul(int x, int y)
{
    return x*y;
}

int Div(int x, int y)
{
    return x / y;
}

int main()
{
    int (*arr[4])(int, int) = {Add, Sub, Mul, Div};
    int i = 0;
    for(i=0;i<4;i++)
    {
        int ret = arr[i](8,4);
        printf("%d\n", ret);
    }

    system("pause");
    return 0;
}