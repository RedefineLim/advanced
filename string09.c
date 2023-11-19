#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//memset内存初始化函数
//void *memset( void *dest, int c, size_t count );

int main()
{
    // char arr[] = "hello world";
    // memset(arr,'x', 5);
    // memset(arr+6,'y',5);
    // printf("%s\n", arr);

    int arr[10] = {0};
    memset(arr,1,40);   //按字节修改
    int i = 0;
    
    for(i=0;i<10;i++)
    {
        printf("%d\n", arr[i]);
    }   //错误的

    system("pause");
    return 0;
}