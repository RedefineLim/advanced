#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int a[3][4] = {0};
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(a[0][0]));
    //a[0]是第一行数组的数组名
    printf("%d\n",sizeof(a[0]));
    printf("%d\n",sizeof(a[0]+1));
    printf("%d\n",sizeof(*(a[0]+1)));
    printf("%d\n",sizeof(a + 1));
    printf("%d\n",sizeof(*(a+1)));
    printf("%d\n",sizeof(&a[0] + 1));
    printf("%d\n",sizeof(*(&a[0]+1)));
    printf("%d\n",sizeof((*a)));
    printf("%d\n",sizeof(a[3]));
    //不会真的去访问第四行，其写法与a[0]表达的是一样的
    //不会真的取计算

    int a = 10;

    system("pause");
    return 0;
}