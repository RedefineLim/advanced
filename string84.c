#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100] = {0};
    int len = 0;
    while(scanf("%d", &arr[len]) == 1)
    {
        len++;
        if(getchar() == '\n')
            break;
    }
    int i = 0;
    for(i=0;i<len;i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}