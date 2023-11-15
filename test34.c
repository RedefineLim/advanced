#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


int My_strcmp(const char* arr1,const char* arr2)
{
    assert(arr1 && arr2);
    while(*arr1 == *arr2)
    {
        if(*arr1 == '\0')
            return 0;
        arr1++;
        arr2++;
    }
    
    return (*arr1 - *arr2);
}

int main()
{
    char arr1[20] = "zhangsan";
    char arr2[] = "zhangsanfen";
    // char arr2[] = "zhangsan";
    //比较两个字符串是否相等(ASCII码值)
    int ret = My_strcmp(arr1, arr2);

    if(ret<0)
        printf("<\n");
    else if(ret == 0)
        printf("==\n");
    else
        printf(">\n");

    system("pause");
    return 0;
}