#include <stdio.h>

struct Stu
{
    char name[20];
    int age;
};

int main()
{
    struct Stu h = {"caonima", 18};
    printf("%s\n%d\n", h.name, h.age);

    return 0;
}