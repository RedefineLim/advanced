#include <stdio.h>
#include <stdlib.h>

//时间复杂度 < O(N)

struct Point
{
    int x;
    int y;
};

struct Point find_num(int (*arr)[3], int r, int c, int k)
{
    int x = 0;
    int y = c-1;
    struct Point p = {0};
    while(x <= r-1 && y >= 0)
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
            // printf("%d %d\n", x, y);
            p.x = x;
            p.y = y;
            return p;
        }
    }
    return p;
}

int main()
{
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    int k = 0;
    scanf("%d", &k);
    struct Point ret = find_num(arr,3,3 ,k);

    printf("%d %d\n", ret.x, ret.y);

    system("pause");
    return 0;
}