#include <stdio.h>
#include <stdlib.h>


int main()
{
    unsigned char a = 200;
    unsigned char b = 100;
    unsigned char c = 0;
    c=a+b;

    //a+b相加时会发生整形提升
    //存储到c中时会发生截断
    printf("%d %d\n", a+b,c);
    
    system("pause");
    return 0;
}