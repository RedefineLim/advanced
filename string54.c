#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// void GetMemory(char** p)
// {
//     *p = (char *)malloc(100);
// }
// //存在内存泄漏的问题

// void Test(void)
// {
//     char *str = NULL;
//     GetMemory(&str);
//     //str存放的就是动态开辟的100字节的地址
//     strcpy(str, "hello world");
//     printf(str);

//     free(str);
//     str = NULL;
// }

char* GetMemory()
{
    char* p = (char *)malloc(100);
    return p;
}
//存在内存泄漏的问题

void Test(void)
{
    char *str = NULL;
    str = GetMemory();
    //str存放的就是动态开辟的100字节的地址
    strcpy(str, "hello world");
    printf(str);

    free(str);
    str = NULL;
}

int main()
{
    Test();
    return 0;
}