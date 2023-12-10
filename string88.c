#include <stdio.h>

// 写一个二分查找函数
// 功能：在一个升序数组中查找指定的数值，找到了就返回下标，找不到就返回-1.

int bin_search(int arr[], int left, int right, int key)
{
    while(left <= right)
    {
        int mid = left + (right - left)/2;
        if(key == arr[mid])
            return mid;
        else if(key < arr[mid])
            right = mid - 1;
        else 
            left = mid + 1;
    }
    return -1;
}

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int i = 0;
    scanf("%d", &i);
    int sz = sizeof(arr)/sizeof(arr[0]);
    int ret = bin_search(arr, 0, sz-1,i);

    if(ret == -1)
        printf("未找到。\n");
    else    
        printf("找到了，下标是:%d\n", ret);

    return 0;
}