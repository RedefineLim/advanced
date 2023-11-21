#include <stdio.h>

// int check_sys()
// {
//     int a = 1;
//     return *(char*) &a;
// }

int check_sys()
{
    union   //匿名类型
    {
        char c;
        int i;
    }u;
    u.i = 1;
    //返回1是小端，返回0是大端
    return u.c;
}

int main()
{
    // int a = 1;
    //低-------->高
    //01 00 00 00----小端
    //00 00 00 01----大端
    int ret = check_sys();
    if(ret == 1)
        printf("小端\n");
    else
        printf("大端\n");

    return 0;
}