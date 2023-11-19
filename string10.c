#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//小乐乐改数字

int revise(int num)
{
    int str = 0;
    int i = 0;
    while(num%10)
    {
        if((num%10)%2)
            str += pow(10,i);
        num /= 10;
        i++;
    }
    return str;
}

int main()
{
    int num = 0;
    scanf("%d", &num);
    
    int ret = revise(num);
    printf("%d\n", ret);

    system("pause");
    return 0;
}