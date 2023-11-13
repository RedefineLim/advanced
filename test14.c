#include <stdio.h>
#include <stdlib.h>

int test(const char* str)
{
    printf("test()\n");
    return 0;
}

int main()
{
    printf("%p\n",&test);
    printf("%p\n",test);

    int (*pf)(const char*) = test;
    // printf("%p\n",test);
    (*pf)("abc");

    system("pause");
    return 0;
}