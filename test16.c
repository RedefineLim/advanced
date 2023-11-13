#include <stdio.h>
#include <stdlib.h>

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
                printf("请输入两个操作数:>");
                scanf("%d %d", &x, &y);
                ret = Add(x,y);
                printf("%d\n",ret);
                break;
            case 2:
                printf("请输入两个操作数:>");
                scanf("%d %d", &x, &y);
                ret = Sub(x,y);
                printf("%d\n",ret);
                break;
            case 3:
                printf("请输入两个操作数:>");
                scanf("%d %d", &x, &y);
                ret = Mul(x,y);
                printf("%d\n",ret);
                break;
            case 4:
                printf("请输入两个操作数:>");
                scanf("%d %d", &x, &y);
                ret = Div(x,y);
                printf("%d\n",ret);
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