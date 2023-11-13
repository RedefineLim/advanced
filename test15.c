#include <stdio.h>
#include <stdlib.h>

// typedef unsigned int uint;
typedef void (*pf_t)(int);

int main()
{
    // (*(void(*)())0) ();
    //以上代码是一次函数调用，调用的是0作为地址处的函数
    //把0强制类型转换为：无参，返回类型是void的函数的地址
    //调用0地址处的这个函数

    // void (* signal( int, void(*)(int )))(int );
    pf_t signal(int , pf_t);


    system("pause");
    return 0;
}