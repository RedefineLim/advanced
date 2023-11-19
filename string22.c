#include <stdio.h>
#include <stdlib.h>

//时间复杂度 < O(N)

//返回型参数
int find_num(int (*arr)[3], int* px, int* py, int k)
{
    int x = 0;
    int y = *py - 1;
    while(x <= *px-1 && y >= 0)
    {
        if(k < arr[x][y])
        {
            y--;
        }
        else if(k > arr[x][y])
        {
            x++;
        }
        else
        {
            *px = x;
            *py = y;
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    int k = 0;
    scanf("%d", &k);
    int x = 3;
    int y = 3;
    int ret = find_num(arr,&x,&y ,k);

    if(ret)
        printf("%d %d\n", x, y);
    else    
        printf("不存在\n");

    system("pause");
    return 0;
}