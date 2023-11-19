#include <stdio.h>

//位段：一中节省空间的用法
//1. 位段的成员可以是 int unsigned int signed int 或者是 char （属于整形家族）类型
//2. 位段的空间上是按照需要以4个字节（ int ）或者1个字节（ char ）的方式来开辟的。
//3. 位段涉及很多不确定因素，位段是不跨平台的，注重可移植的程序应该避免使用位段。


struct A
{
    int _a:2;
    int _b:5;
    int _c:10;
    int _d:30;
};

int main()
{
    printf("%d\n", sizeof(struct A));
    return 0;
}