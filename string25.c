#include <stdio.h>
#include <stdlib.h>

//矩阵的转置

int main()
{
    int n = 0;
    int m = 0 ;
    scanf("%d%d", &n, &m);
    // int arr[n][m];  //C99中的变长数组
    int arr[10][10] = {0};
    int i = 0;
    int j = 0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    //输出
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}