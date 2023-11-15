#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char arr1[20] = "Hello ";
    strcat(arr1, "world!");
    //不可以之际给自己追加

    printf("%s\n", arr1);

    system("pause");
    return 0;
}