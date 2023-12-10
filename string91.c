#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// 实现一个函数is_prime，判断一个数是不是素数。
// 利用上面实现的is_prime函数，打印100到200之间的素数。

bool is_prime(int num)
{
    int i = 0;
    for(i=2;i<sqrt(num);++i)
    {
        if(num%i == 0)
            return false;
    }
    return true;
}

int main()
{
    int i = 0;
    for(i=100;i<=200;++i)
    {
        if(is_prime(i))
            printf("%d ", i);
    }

    return 0;
}