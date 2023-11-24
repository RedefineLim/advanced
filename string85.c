#include <stdio.h>
#include <stdlib.h>

int Cmp_int(const void* e1, const void* e2)
{
    return (*(int*)e1 - *(int*)e2);
}

int main()
{
    int arr[100] = {0}; //第一个crash点
    int count = 0;
    int i = 0;
    while(scanf("%d", &arr[count]) == 1)
    {
        ++count;
        if(getchar() == '\n')             // 第二个crash点
            break;
    }

    int max = arr[0];
    for(i=1;i<count;i++)
        arr[i]>max?max=arr[i]: max;
    printf("%d\n", max);
    
    int min = arr[0];
    for(i=1;i<count;i++)
        arr[i]<min?min=arr[i]:min;
    printf("%d\n", min);

    qsort(arr,count,sizeof(int), Cmp_int); 
    for(i=0;i<count;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}