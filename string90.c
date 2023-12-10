#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int year)
{
    if(((year%4 == 0)&&(year%100 != 0)) || (year%400 == 0))
        return true;
    else
        return false;
}

int main()
{
    int year = 0;
    while(scanf("%d", &year) == 1)
    {
        if(is_leap_year(year))
            printf("是闰年。\n");
        else
            printf("不是闰年。\n");
    }    
    return 0;
}