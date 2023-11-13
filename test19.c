#include <stdio.h>
#include <stdlib.h>

//回调函数
//冒泡排序(直排整型数组)

void bubble_sort(int* arr, int sz)
{
    int i = 0;
    int flag = 1;
    for(i=0;i<sz;i++)
    {
        //一趟冒泡排序
        int j = 0;
        for(j=0;j<sz-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp; 
                flag = 0;
            }
        }
        if(flag == 1)
            break;
    }
}

int main()
{
    int arr[] = {9,8,7,6,4,3,2,1,0};
    //把数组排成升序
    int sz = sizeof(arr)/ sizeof(arr[0]);
    bubble_sort(arr ,sz);

    int i = 0;
    for(i=0;i<sz;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    system("pause");
    return 0;
}