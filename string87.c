#include <stdio.h>

int main()
{
    int input = 0;
    scanf("%d", &input);

    switch(input)
    {
        case 1:
        case 2:
        case 3:
            printf("%d\n", input);
            break;
        case 4:
            printf("hahaha");
            break;
        default :
            break;
    }

    return 0;
}