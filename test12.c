#include <stdio.h>
#include <stdlib.h>

int Add(int x, int y)
{
    return x+y;
}

int main()
{
    // int arr[5] = {0};
    // int (*p)[5] = &arr;

    // printf("%p\n", &Add);
    // printf("%p\n", Add);

    int (*pf)(int , int) = &Add;
    // int (*pl)(int , int) = Add;

    // printf("%p\n", pf);
    // printf("%p\n", pl);

    // int ret = (*pf)(3 ,5 );
    int ret = pf(3 ,5 );
    printf("%d\n",ret);

    system("pause");
    return 0;
}