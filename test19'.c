#include <stdio.h>
#include <stdlib.h>


//回调函数
//冒泡排序(直排整型数组)
//qsort函数的使用
//qsort可以排序任意类型的数据 
//void qsort( void *base, size_t num, size_t width, int (__cdecl *compare )(const void *elem1, const void *elem2 ) );
//           起始位置  待排序数据元素的个数  数据元素的大小           函数指针----比较函数        


// void bubble_sort(int* arr, int sz)
// {
//     int i = 0;
//     int flag = 1;
//     for(i=0;i<sz;i++)   //趟数
//     {
//         //一趟冒泡排序
//         int j = 0;
//         for(j=0;j<sz-1;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 int tmp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = tmp; 
//                 flag = 0;
//             }
//         }
//         if(flag == 1)
//             break;
//     }   
// }

//e1指向一个整数
//e2指向另一个整数

// //void* 指针不可以直接解引用
// int cmp_int(const void* e1, const void* e2)
// {
//     if(*e1 > *e2)
//         return 1;
//     else if(*e1 = *e2)
//         return 0;
//     else    
//         return -1;
// }


//void*是无具体类型的指针，可以接受任意类型的地址
//void*是无具体类型的指针，所以不能解引用操作，也不能+-整数 


// int cmp_int(const void* e1, const void* e2)
// {
//     if(*(int*)e1 > *(int*)e2)
//         return 1;
//     else if(*(int*)e1 = *(int*)e2)
//         return 0;
//     else    
//         return -1;
// }
int cmp_int(const void* e1, const void* e2)
{
    return (*(int*)e1 - *(int*)e2);
}

int main()
{
    int arr[] = {9,8,7,6,4,3,2,1,0};
    //把数组排成升序
    int sz = sizeof(arr)/ sizeof(arr[0]);
    // bubble_sort(arr ,sz);

    qsort(arr,sz,sizeof(arr[0]),cmp_int);

    int i = 0;
    for(i=0;i<sz;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    system("pause");
    return 0;
}