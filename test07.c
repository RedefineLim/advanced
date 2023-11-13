#include <stdio.h>
#include <stdlib.h>


int main()
{
    // char ch = 'w';
    // char* pc = &ch;
    // *pc = 'b';
    // printf("%c \n", ch);

    char* p = "abcdef";
    char arr[] = "abcdef";
    //把字符串首字符a的地址，赋值给了p
    printf("%s\n", p);
    printf("%s\n", arr);

    system("pause");
    return 0;
}