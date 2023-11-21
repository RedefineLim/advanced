#include <stdio.h>

int main()
{
    printf("Hello world.\n");
    char* p = "Hello world.\n";
    printf(p);  //传的是首字符的地址

    return 0;
}