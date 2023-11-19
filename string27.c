#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[n];
    int i = 0;
    int flag1 = 0;
    int flag2 = 0;
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
        if(i>0)
        {
            if(arr[i]>arr[i-1])
                flag1 = 1;
            else    
                flag2 = 1;
        }
    }

    if(flag1 + flag2 <= 1)
        printf("sorted\n");
    else
        printf("unsorted");

    return 0;
}