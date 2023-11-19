#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//模拟实现memcpy
//void*泛型指针

void* My_memcpy(void* dest, const void* src, size_t num)
{
    assert(dest && src);
    void* ret = dest;
    while(num--)
    {
        *(char*)dest = *(char*)src;
        dest = (char*)dest + 1;
        src = (char*)src + 1;
    }
    return ret;
}

int main()
{
    int arr1[] = {1,2,3,4,5,6,7};
    int arr2[10] = {0};

    My_memcpy(arr2,arr1,28);
    int i = 0;
    for(i=0;i<7;i++)
    {
        printf("%d ",arr2[i]);
    }
    printf("\n");

    system("pause");
    return 0;
}