#include <stdio.h>

struct S
{
    char a : 3;
    char b : 5;
    char c : 5;
    char d : 4;
};

int main()
{
    // printf("%d\n", sizeof(struct S));
    struct S s = {0};
    s.a = 10;   //类似截断
    s.b = 12;
    s.c = 3;
    s.d = 4;

    return 0;
}