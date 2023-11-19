#include <stdio.h>
#include <stdlib.h>


int main()
{
    double price = 0.0;
    int m = 0;
    int d = 0;
    int flag = 0;
    scanf("%lf %d %d %d", &price ,&m, &d, &flag);

    if(m==11 && d==11)
        price = price*0.7 - flag*50;
    else if(m==12 && d==12)
        price = price*0.8 - flag*50;
    if(price< 0.0)
        printf("%.2f\n", 0);
    else    
        printf("%.2f\n",price);

    system("pause");
    return 0;
}