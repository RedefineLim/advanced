#include <stdio.h>

//联合在计算大小的时候也存在对齐

// union Un
// {
//     char arr[5];
//     int i;
// };

// union Un
// {
//     short arr[7];
//     int i;
// };

union Un1
{
    char c1;
    char c2;
    char c3;
    char c4;
    char c5;

    int i;
};

int main()
{
    printf("%d\n", sizeof(union Un1));

    return 0;
}