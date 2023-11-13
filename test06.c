#include <stdio.h>
#include <stdlib.h>

//有序序列合并

int main()
{
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);

    //变长数组不能初始化
    int arr1[n];
    int arr2[m];

    int i = 0;
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr1[i]);
    }

    for(i=0;i<m;i++)
    {
        scanf("%d", &arr2[i]);
    }

    int j = 0;
    int k = 0;
    while(j<n && k<m)
    {
        if(arr1[j] < arr2[k])
        {
            printf("%d ", arr1[j]);
            j++;
        }
        else
        {
            printf("%d ", arr2[k]);
            k++;
        }
    }
    if(j<n)
    {
        for(;j<n;j++)
        {
            printf("%d ", arr1[j]);
        }
    }
    else
    {
        for(;k<m;k++)
        {
            printf("%d ", arr2[k]);
        }
    }

    system("pause");
    return 0;
}