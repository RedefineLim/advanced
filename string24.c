#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//不要轻易用strcat，尽可能的使用strncat

int is_left_move(char* arr1, char* arr2)
{
    int len = strlen(arr1);
    strncat(arr1, arr1,len);
    char* ret = strstr(arr1, arr2);

    if(ret == NULL)
        return 0;
    else
        return 1;
}

int main()
{
    char arr1[20] = "abcdef";
    char arr2[] = "cdefab";
    //判断arr2中的字符串是否可以通过arr1中的字符串旋转得到
    int ret = is_left_move(arr1, arr2);
    if(ret)
        printf("OK\n");
    else    
        printf("NO\n");

    system("pause");
    return 0;
}