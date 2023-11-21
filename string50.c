#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>

int main()
{
    int a = 20;
    int* p = &a;

    p = NULL;

    return 0;
}