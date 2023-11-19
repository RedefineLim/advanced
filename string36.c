#include <stdio.h>

struct S
{
    int data[1000];
    int num;
};

void print1(struct S ss)    //传值调用
{
    int i = 0;
    for(i=0;i<3;i++)
    {
        printf("%d ", ss.data[i]);
    }
    printf("%d\n", ss.num);
}

void print2(const struct S* ps)   //传址调用
{
    int i = 0;
    for(i=0;i<3;i++)
    {
        printf("%d ", ps->data[i]);
    }
    printf("%d\n", ps -> num);
}

int main()
{
    struct S s = {{1,2,3}, 100};
    print1(s);
    print2(&s);
    return 0;
}