#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

//calloc
//void *calloc( size_t num, size_t size );
//返回之前将空间初始化

int main()
{
    int* p = (int*)calloc(10,sizeof(int));
    if(p == NULL)
    {
        printf("%s\n", strerror(errno));
        return 1;
    }
    int i = 0;
    for(i=0;i<10;i++)
    {
        printf("%d ", *(p+i));
    }
    free(p);
    p = NULL;

    return 0;
}