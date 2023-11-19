#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_left_move(char* arr1, char* arr2)
{
    int len = strlen(arr1);
    int i = 0;
    for(i=0;i<len;i++)
    {
        char tmp = arr1[0];
        int j = 0;
        for(j=0;j<len-1;j++)
        {
            arr1[j] = arr1[j+1];
        }
        arr1[len-1] = tmp;
        if(strcmp(arr2,arr1) == 0)
            return 1;
    }
    return 0;
}

int main()
{
    char arr1[] = "abcdef";
    char arr2[] = "cdefab";
    //判断arr2中的字符串是否可以通过arr1中的字符串旋转得到
    int ret = is_left_move(arr1, arr2);
    if(ret)
        printf("Ok\n");
    else    
        printf("No\n");

    system("pause");
    return 0;
}