#include <stdio.h>
#include <stdlib.h>

//日本某地发生一起谋杀案

int main()
{
    int killer = 0;
    for(killer = 'a';killer <= 'd';killer++)
    {
        if((killer!='a')+(killer=='c')+(killer=='d')+(killer!='d') == 3)
            printf("%c\n", killer);
    }

    system("pause");
    return 0;
}