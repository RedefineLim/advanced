#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char arr1[20] = "abcdef";
    char arr2[] = "hello world!";

    strncpy(arr1, arr2, 5);
    printf("%s\n", arr1);

    system("pause");
    return 0;
}