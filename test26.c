#include <stdio.h>
#include <stdlib.h>


int main()
{
    char* a[] = {"work","at","alibaba"};
    char** pa = a;
    pa++;

    printf("%s\n", *pa);

    system("pause");
    return 0;
}