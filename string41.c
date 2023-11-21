#include <stdio.h>

//联合（共用体）

union Un
{
    int a;
    char c;
};

struct St
{
    int a;
    char c;
};

int main()
{
    union Un u;
    u.a = 0x11223344;
    u.c = 0x00;
    // printf("%d\n", sizeof(u));

    // printf("%p\n", &u);
    // printf("%p\n", &(u.a));
    // printf("%p\n", &(u.c));

    return 0;
}