#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>

int main()
{
    int* p = (int*) malloc(40);
    if(p == NULL)
    {
        printf("%s\n", strerror(errno));
        return 1;
    }
    int i = 0;
    for(i=0;i<=10;i++)
    {
        p[i] = i;
    }
    free(p);
    p = NULL;

    return 0;
}