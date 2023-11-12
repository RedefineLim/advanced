#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


unsigned char i = 0;
int main()
{
    for(i=0;i<=255;i++)
    {
        printf("hello world\n");
        Sleep(100);
    }


    system("pause");
    return 0;
}
//unsigned char的范围是0~255