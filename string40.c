#include <stdio.h>

//枚举:一一列举
//枚举常量

enum Day    //星期
{
    //枚举常量
    Mon = 1,
    Tues,
    Wed,
    Thur,
    Fri,
    Sat,
    Sun
};

int main()
{
    enum Day d = Fri;
    // printf("%d\n", Mon);
    // printf("%d\n", Tues);
    // printf("%d\n", Wed);
    // printf("%d\n", Thur);
    // printf("%d\n", Fri);

    return 0;
}