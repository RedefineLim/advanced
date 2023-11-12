#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

//继续模拟实现strlen

int My_strlen(const char* str)
{
    assert(str);
    int count = 0;
    while(*str)
    {
        str++;
        count++;
    }
    return count;
}

int main()
{
    // int len = strlen("abcdef");
    // printf("%d\n", len);

    if(My_strlen("abc") - My_strlen("abcdef") >= 0)
    // if(strlen("abc") - strlen("abcdef") >= 0)
        printf(">\n");
    else
        printf("<\n");

    //strlen函数返回类型是size_t（unsigned int）

    system("pause");
    return 0;
}