#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

//realloc
//void *realloc( void *memblock, size_t size );
//          要调整空间的起始位置   新的大小

int main()
{
    int* p = (int*)malloc(40);
    if(p == NULL)
    {
        printf("%s\n", strerror(errno));
        return 1;
    }
    //使用
    //1,2,3,4,5,6,7,8,9,10
    int i = 0;
    for(i=0;i<10;i++)
    {
        *(p+i) = i+1;
    }
    //扩容
    int* ptr = (int*)realloc(p, 80);
    if(ptr != NULL)
        p = ptr;
    for(i=0;i<10;i++)
    {
        *(p+i) = i+1;
    }
    free(p);
    p = NULL;

    return 0;
}