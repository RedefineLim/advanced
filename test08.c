#include <stdio.h>
#include <stdlib.h>


int main()
{
    const char* p1 = "abcdef";
    const char* p2 = "abcdef";

    char arr1[] = "abcdef";
    char arr2[] = "abcdef";

    if(p1 == p2)
        printf("p1==p2\n");
    else
        printf("p1 != p2");

    if(arr1 == arr2)
        printf("arr1 == arr2\n");
    else    
        printf("arr1 != arr2\n");

    system("pause");
    return 0;
}