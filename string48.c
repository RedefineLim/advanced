#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* p = (int*)malloc(40);
    if(p == NULL)
    {
        return 1;
    }
    *p = 20;
    free(p);
    p = NULL;

    return 0;
}