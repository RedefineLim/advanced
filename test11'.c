#include <stdio.h>
#include <stdlib.h>


// void print1(int arr[3][5], int r, int c)
// {
//     int i = 0;
//     for(i=0;i<r;i++)
//     {
//         int j = 0;
//         for(j=0;j<c;j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
// }

void print2(int (*p)[5] ,int r, int c)  //指向一维数组的指针
{
    int i = 0;
    for(i=0;i<r;i++)
    {
        int j = 0;
        for(j=0;j<c;j++)
        {
            printf("%d ",*(*(p+i) + j));
        }
        printf("\n");
    }
}

int main()
{
    int arr[3][5] = {1,2,3,4,5,2,3,4,5,6,3,4,5,6,7};
    // print1(arr ,3 ,5);

    //二维数组的数组名是首元素的地址
    //二维数组首元素的地址是第一行元素的地址
    print2(arr, 3, 5);

    system("pause");
    return 0;
}