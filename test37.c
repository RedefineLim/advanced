#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char arr1[] = "abcdef";
    char arr2[] = "abc";
    int ret = strncmp(arr1, arr2, 4);

    if(ret == 0)
        printf("==\n");
    else if(ret < 0)
        printf("<\n");
    else    
        printf(">\n");

    system("pause");
    return 0;
}