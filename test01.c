#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char a[1000];
    int i;

    for(i=0;i<1000;i++)
    {
        a[i] = -1 - i;
    }
    //arr[i]---->char   -128~127

    printf("%d\n",strlen(a));
    //strlen 是求字符串长度，关注字符串中'\0'（数字0）的位置

    system("pause");
    return 0;
}