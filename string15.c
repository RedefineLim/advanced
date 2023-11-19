#include <stdio.h>
#include <stdlib.h>


int main()
{
    unsigned int a = 0x1234;
    unsigned char b = *(unsigned char*) &a;
    printf("%x\n", b);

    system("pause");
    return 0;
}