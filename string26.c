#include <stdio.h>
#include <stdlib.h>

//上三角矩阵的判断

int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[n][n];
    int i = 0;
    int j = 0;
    int flag = 1;   //表示是上三角矩阵
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(arr[i][j] != 0)
                {
                    flag = 0;
                    goto end;
                }
        }
    }
end:
    if(flag)
        printf("是上三角矩阵\n");
    else    
        printf("不是上三角矩阵\n");

    system("pause");
    return 0;
}