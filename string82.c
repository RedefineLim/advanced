#include <stdio.h>

#define M 3

int main()
{
#if M<5
    printf("hehe\n");
#elif M==5
    printf("haha\n");
#else M>5
    printf("heihei\n");
#endif

    return 0;
}