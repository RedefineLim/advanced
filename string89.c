#include <stdio.h>

// 实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
// 如：输入9，输出9*9口诀表，输出12，输出12*12的乘法口诀表。

int main()
{
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int j = 0;
    for(i=1;i<=n;++i)
    {
        for(j=1;j<=i;++j)
        {
            printf("%d*%d=%d\t",j, i, i*j);
        }
        printf("\n");
    }

    return 0;
}