#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// 有时候需要从前往后处理数据，有时候需要从后往前处理数据

void* My_memmove(void* dest, const void* src,size_t num)
{
    assert(dest && src);
    void* ret = dest;
    if(dest<src)
    {
        while(num--)
        {
            *(char*)dest = *(char*)src;
            dest = (char*)dest + 1;
            src = (char*)src + 1;
        }
    }
        else
        {
            while(num--)
            {
                *((char*)dest+num) = *((char*)src + num);
            }
        }
    return ret;
}

int main()
{
    int arr1[] = {1,2,3,4,5,6,7,8,9,10};
    // int arr2[20] = {0};
    // memcpy(arr2,arr1,20);
    My_memmove(arr1+2,arr1,20);

    int i = 0;
    for(i=0;i<10;i++)
    {
        printf("%d ", arr1[i]);
    }

    system("pause");
    return 0;
}