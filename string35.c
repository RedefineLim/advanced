#include <stdio.h>

//修改默认对齐数 
// #pragma pack(4)      //设置开始
// #pragma pack(1)
struct S
{
    int i;
    double d;
};
// #pragma pack()       //设置结束
// #pragma pack()

int main()
{
    printf("%d\n", sizeof(struct S));

    return 0;
}