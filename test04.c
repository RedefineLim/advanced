#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n = 9;
    float* pFloat = (float*)&n;

    printf("n的值为: %d\n", n);
    printf("*pFloat的值为: %f\n", *pFloat);     //说明浮点数和整型在内存中的存储方式不同
    *pFloat = 9.0;
    printf("num的值为: %d\n", n);           //说明浮点数和整型从内存中的获取方式不同
    printf("*pFloat的值为: %f\n", *pFloat);

    system("pause");
    return 0;
}