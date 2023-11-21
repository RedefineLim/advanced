#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main()
{
    int arr[10] = {0};  
    //动态内存开辟
    int* p = (int*)malloc(40);
    if(p == NULL)
    {
        printf("%s\n", strerror(errno));
        return 1;   //异常返回
    }
    int i = 0;
    for(i=0;i<10;i++)
    {
        *(p+i) = i;
    }
    for(i=0;i<10;i++)
    {
        printf("%d ", *(p+i));
    }

    //没有free，并不是说内存空间就不回收了
    //当程序退出的时候，系统会自动回收内存空间的
    free(p);
    p = NULL;   //归还指针,避免p成为野指针

    return 0;   //正常返回
}