#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char name[20] = {0};
    strcpy(name, "zhangsan");

    printf("%s\n", name);
    // name = "zhangsan";   //err,name是数组名 是地址，地址是一个常量，不能被赋值
    
    //strcpy拷贝 \0 以及 \0 前面的车字符串

    system("pause");
    return 0;
}