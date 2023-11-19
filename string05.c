#include <stdio.h>
#include <stdlib.h>
#include <memory.h>


int main()
{
    int arr1[] = {1,2,3,4,5,6,7,8,9,10};
    int arr2[20] = {0};
    memcpy(arr2,arr1,20);

    int i = 0;
    for(i=0;i<5;i++)
    {
        printf("%d ", arr2[i]);
    }

    system("pause");
    return 0;
}