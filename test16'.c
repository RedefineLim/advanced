#include <stdio.h>
#include <stdlib.h>

//回调函数机制

void menu()
{
    printf("**************************\n");
    printf("******1.add  2.sub********\n");
    printf("******3.mul  4.div********\n");
    printf("******0.exit      ********\n");
    printf("**************************\n");
}

int Add(int x, int y)
{
    return x+y;
}

int Sub(int x, int y)
{
    return x-y;
}

int Mul(int x, int y)
{
    return x*y;
}

int Div(int x, int y)
{
    return x / y;
}

void calc(int (*pf) (int , int))
{
    int x = 0;
    int y = 0;
    int ret = 0;

    printf("请输入两个操作数:>");
    scanf("%d %d",&x ,&y );
    ret = pf(x, y );
    printf("%d\n", ret);
}

int main()
{
    int input = 0;
    int x = 0;
    int y = 0;
    int ret = 0;
    do
    {
        menu();
        printf("请选择:>");
        scanf("%d", &input);

        switch(input)
        {
            case 1:
                calc(Add);
                break;
            case 2:
                calc(Sub);
                break;
            case 3:
                calc(Mul);
                break;
            case 4:
                calc(Div);
                break;
            case 0:
                break;
            default:
                printf("选择错误!重新选择\n");
                break;
        }
    }while(input);

    system("pause");
    return 0;
}