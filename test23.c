#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char* p = "abcdef";
    
    printf("%d\n", sizeof(p));
    printf("%d\n", sizeof(p+1));
    printf("%d\n", sizeof(*p));
    printf("%d\n", sizeof(p[0]));
    printf("%d\n", sizeof(&p));
    printf("%d\n", sizeof(&p+1));
    printf("%d\n", sizeof(&p[0] + 1));
    
    printf("%d\n", strlen(p));
    printf("%d\n", strlen(p+1));
    printf("%d\n", strlen(*p));
    printf("%d\n", strlen(p[0]));
    printf("%d\n", strlen(&p));
    printf("%d\n", strlen(&p+1));
    printf("%d\n", strlen(&p[0] + 1));

    system("pause");
    return 0;
}