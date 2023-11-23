#include <stdio.h>

#define DOUBLE(X) ((X)+(X))

int main()
{
    int r = 10*DOUBLE(3);

    printf("%d\n", r);

    return 0;
}