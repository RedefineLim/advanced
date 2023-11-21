#include <stdlib.h>

int main()
{
    int* p = (int*)malloc(40);
    if(p == NULL)
        return 1;
    
    int i = 0;
    for(i=0;i<10;i++)
    {
        *p = i;
        p++;
    }
    free(p);
    p = NULL;   //不能释放一部分动态开辟的内存
    //要释放就释放整个动态开辟的内存

    return 0;
}