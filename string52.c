#include <stdlib.h>

void test()
{
    int* p = (int*)malloc(100);
    //.....

    int flag = 0;
    scanf("%d", &flag);

    if(flag = 5)
        return;

    free(p);
    p = NULL;
}

int main()
{
    test();
    //...... 

    return 0;
}