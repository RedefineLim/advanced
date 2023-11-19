#include <stdio.h>
#include <stddef.h>

//结构体内存对齐

struct S1
{
    char c1;    //1
    int i;  //4
    char c2;    //1
};

struct S2
{
    char c1;
    char c2;
    int i;
};

int main()
{
    // printf("%d\n", sizeof(struct S1));
    // printf("%d\n", sizeof(struct S2));
    //输出
    //12
    printf("%d\n", offsetof(struct S2, c1));
    printf("%d\n", offsetof(struct S2, c2));
    printf("%d\n", offsetof(struct S2, i));

    return 0;
}