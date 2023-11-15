#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char* My_strcpy(char* arr2, char* arr1)
{
    assert(arr1 && arr2);
    int ret = arr2;
    while(*arr2 ++ = *arr1 ++);

    return ret;    //记录起始位置
}

int main()
{
    char arr1[] = "abcdef";
    char arr2[20] = {0};

    My_strcpy(arr2, arr1);
    printf("%s\n", arr2);

    system("pause");
    return 0;
}