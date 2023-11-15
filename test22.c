#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//size_t strlen( const char *string );

int main()
{
    char arr[] = "abcdef";
    //{'a','b','c','d','e','f','\0'}
    printf("%d\n" ,strlen(arr));    //6
    printf("%d\n" ,strlen(arr+0));      //6
    printf("%d\n" ,strlen(*arr));  //?
    printf("%d\n" ,strlen(&arr));   //6
    printf("%d\n" ,strlen(&arr + 1));   //随机值-7
    printf("%d\n" ,strlen(&arr[0] + 1)); //5

    system("pause");
    return 0;
}

//strlen是求字符串长度的，关注的是字符串中的\0，计算的是\0之前出现的字符个数
//strlen是库函数，只针对字符串
//sizeof只关注占用内存的大小，不在乎内存中放的是什么
//sizeof是操作符