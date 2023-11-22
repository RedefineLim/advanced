#include <stdio.h>
#include <stdlib.h>

struct S
{
    int n;
    int* arr;
};

int main()
{
    struct S* ps = (struct S*)malloc(sizeof(struct S));
    if(ps == NULL)
        return 1;
    ps->n = 100;
    ps->arr = (int*)malloc(40);
    if(ps->arr == NULL)
        return 1;

    int i = 0;
    for(i=0;i<10;i++)
    {
        ps->arr[i] = i;
        printf("%d ", ps->arr[i]);
    }
    //扩容
    int* ptr = (int*)realloc(ps->arr, 80);
    if(ptr == NULL)
        return 1;
    //释放
    free(ps->arr);
    free(ps);
    ps->arr = NULL;
    ps = NULL;

    return 0;
}