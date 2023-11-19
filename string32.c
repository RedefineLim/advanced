#include <stdio.h>

//结构体初始化

struct Point
{
    int x;
    int y;
}p1 = {2,3};

struct score
{
    int n ;
    char ch;
};

struct Stu
{
    char name[20];
    int age;
    struct score s;
};

int main()
{
    struct Stu s1 = {"zhangsan", 20, {100, 'q'}};
    // printf("%d %d %d %c\n", p1.x, p1.y);
    printf("%s %d %d %c\n", s1.name, s1.age,s1.s.n, s1.s.n);

    return 0;
}