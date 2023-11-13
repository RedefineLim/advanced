#include <stdio.h>
#include <stdlib.h>


int main()
{
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {2,3,4,5,6};
    int arr3[] = {3,4,5,6,7};

    int* parr[3] = {arr1,arr2,arr3};
    
    int i = 0;
    for(i=0;i<3;i++)
    {
        int j = 0;
        for(j=0;j<5;j++)
        {
            printf("%d ", parr[i][j]);//但是不可以看成是二维数组，因为二维数组在内存中是连续存放的
            //而这三个数组在内存中不一定是连续存放的
            // printf("%d ", *(parr[i]+j));
        }
        printf("\n");
    }
    printf("\n");

    system("pause");
    return 0;
}