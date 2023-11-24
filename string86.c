#include <stdio.h>
#include <stddef.h>

//offsetof用宏实现

struct S
{
    char c1;
    int i;
    char c2;
};

#define OFFSETOF(type, m_name) (size_t)(int)(&((type*)0)->m_name)

int main()
{
    struct S s = {0};
    // printf("%d\n", offsetof(struct S ,c1));
    // printf("%d\n", offsetof(struct S ,i));
    // printf("%d\n", offsetof(struct S ,c2));
    printf("%d\n", OFFSETOF(struct S ,c1));
    printf("%d\n", OFFSETOF(struct S ,i));
    printf("%d\n", OFFSETOF(struct S ,c2));

    return 0;
}