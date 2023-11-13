#include <stdio.h>
#include <stdlib.h>


int main()
{
    int arr[10] = {0};
    int sz = sizeof(arr)/sizeof(arr[0]);
    printf("%p\n", arr);
    printf("%p\n", &arr[0]);

    printf("%d \n", sz);

    system("pause");
    return 0;
}