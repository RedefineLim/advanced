#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// void reverse(char* arr, int k)
// {
//     char* right = arr;
//     char* left = arr+k-1;
//     while(right<left)
//     {
//         char tmp = *right;
//         *right = *left;
//         *left = tmp;
//         right++;
//         left--;
//     }    
// }

void reverse(char* arr, int k)
{
    int i = 0;
    int len = strlen(arr);
    for(i=0;i<k;i++)
    {
        char tmp = arr[0];
        int j = 0;
        for(j=0;j<len-1;j++)
        {
            arr[j] = arr[j+1];
        }
        arr[len-1] = tmp;
    } 
}

int main()
{
    char arr[] = "ABCD";
    int k = 0;
    scanf("%d", &k);
    reverse(arr, k);

    printf("%s\n",arr);

    system("pause");
    return 0;
}