#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>


int main()
{
    // printf("%s\n", strerror(0));
    // printf("%s\n", strerror(1));
    // printf("%s\n", strerror(2));
    // printf("%s\n", strerror(3));
    // printf("%s\n", strerror(4));
    // printf("%s\n", strerror(5));

    FILE* pf = fopen("test.txt" ,"r");
    if(pf == NULL)
    {
        printf("%s\n", strerror(errno));
        return 1;
    }

    system("pause");
    return 0;
}