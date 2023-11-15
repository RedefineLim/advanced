#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char arr1[20] ="hello";
    char arr2[] = " world";

    strncat(arr1 ,arr2 ,4);
    printf("%s\n", arr1);

    //追加函数：在\0处追加

    system("pause");
    return 0;
}