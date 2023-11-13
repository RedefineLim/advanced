#include <stdio.h>
#include <stdlib.h>

int Add(int x, int y )
{
    return x+y;
}

void calc(int (*pf)(int , int))
{
    int a = 3;
    int b = 5;
    int ret = (*pf)(a,b);
    printf("%d\n", ret);
}

int main()
{
    calc(Add);
    
    system("pause");
    return 0;
}