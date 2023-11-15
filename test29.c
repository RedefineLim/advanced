#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

size_t My_strlen(const char* arr)
{
    size_t count = 0;
    assert(arr);

    while(*arr)
    {
        count++;
        arr++;
    }
    return count;
}
    //计数器放大
    //指针-指针
    //递归的方式

int main()
{
    char arr[] = "abcdef";
    size_t len = My_strlen(arr);

    printf("%u\n", len);

    system("pause");
    return 0;
}