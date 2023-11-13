#include <stdio.h>
#include <stdlib.h>

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
    //函数指针数组
    int (*pfArr[]) (int ,int ) = {0,Add,Sub,Mul,Div};
    //指向函数数组的指针
    int (*(*ppfArr)[5])(int ,int ) = &pfArr;

    system("pause");
    return 0;
}