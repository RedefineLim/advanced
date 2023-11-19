#include <stdio.h>
#include <stdlib.h>
#include <memory.h>


int main()
{
    int arr1[] = {1,2,3,4,5,6,7};
    int arr2[10] = {0};

    memcpy(arr2,arr1,28);
    int i = 0;
    for(i=0;i<7;i++)
    {
        printf("%d ",arr2[i]);
    }
    printf("\n");

    system("pause");
    return 0;
}