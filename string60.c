#include <stdio.h>

//小乐乐与欧几里得
//辗转相除法

int main()
{
    int n = 0;
    int m = 0;
    while(scanf("%d %d", &n, &m) == 2)
    {
        int i = n;
        int j = m;
        int r = 0;
        while(r = i%j)
        {
            i = j;
            j = r;
        }
        //m*n/j就是最小公倍数
        printf("%d\n", j+m*n/j);
    }

    return 0;
}