#include <stdlib.h>

int* test()
{
    int* p = (int*)malloc(100);
    if(p == NULL)
    {
        return p;
    }
    //.....
    return p;
}

int main()
{
    int* ret = test();
    //忘记释放

    return 0;
}