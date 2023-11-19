#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

//左旋字符串

void char_reverse(char* left, char* right)
{
    while(left<right)
    {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

int main()
{
    int k = 0;
    scanf("%d", &k);
    char arr[] = "ABCDEF";

    int len = strlen(arr);
    k %= len;
    char_reverse(arr,arr+k-1);
    char_reverse(arr+k,arr+len-1);
    char_reverse(arr, arr+len-1);

    printf("%s\n", arr);

    system("pause");
    return 0;
}