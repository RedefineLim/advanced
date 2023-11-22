#include <stdio.h>
#include <stdlib.h>

//容易形成内存碎片

struct S
{
    int n;
    int arr[];
};

int main()
{
    //printf("%d\n", sizeof(struct S)); //sizeof 返回的这种结构大小不包括柔性数组的内存。

    //柔性数组的使用:malloc开辟空间
    struct S* ps = (struct S*)malloc(sizeof(struct S) + 40);
    ps->n = 100;
    int i = 0;
    for(i=0;i<10;i++)
    {
        ps->arr[i] = i;
    }
    for(i=0;i<10;i++)
    {
        printf("%d ", ps->arr[i]);
    }

    struct S* ptr = (struct S*)realloc(ps, sizeof(struct S)+80);
    if(ptr != NULL)
        ps = ptr;
    //释放
    free(ps);
    ps = NULL;

    return 0;
}