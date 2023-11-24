#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Cmp_arr(const void* e1, const void* e2)
{
    return (*(int*)e1 - *(int*)e2);
}

int main() 
{
    int arr[100], size;
    char input[1000]; // 用于存储用户输入的字符串

    // 读取用户输入
    fgets(input, sizeof(input), stdin);

    // 使用sscanf逐个读取整数并存储到数组中
    size = 0;
    int num;
    char *token = strtok(input, " \n"); // 使用空格和换行符分割输入
    while (token != NULL && sscanf(token, "%d", &num) == 1) 
    {
        arr[size++] = num;
        token = strtok(NULL, " \n");
    }

    // 找到最大值和最小值
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // 排序数组
    qsort(arr,size,sizeof(arr[0]),Cmp_arr);

    printf("%d\n", max);
    printf("%d\n", min);
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
