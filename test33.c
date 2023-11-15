#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>


char* My_strcat(char* dest ,const char* src)
{
    char* ret = dest;
    assert(dest && src);
    while(*dest)
    {
        dest++;
    }
    while(*dest++ = *src++);
    
    return ret;
}

int main()
{
    char arr1[20] = "Hello ";
    My_strcat(arr1, "world!");

    printf("%s\n", arr1);

    system("pause");
    return 0;
}