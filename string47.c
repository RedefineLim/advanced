#include <stdio.h>
#include <stdlib.h>

int main()
{
    realloc(NULL,40);
    malloc(40);
    //等价的

    return 0;
}