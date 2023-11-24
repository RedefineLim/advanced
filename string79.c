#include <stdio.h>

int main()
{
    int arr[SZ];
    int i = 0;
    for(i=0;i<SZ;i++)
    {
        arr[i] = i;
        printf("%d ",arr[i]);
    }

    return 0;
}