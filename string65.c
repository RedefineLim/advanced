#include <stdio.h>
#include <string.h>
#include <errno.h>

//打开文件
//读写文件
//关闭文件

int main()
{
    //打开文件
    FILE* pf = fopen("test.txt", "w");
    if(pf == NULL)
    {
        // printf("%s\n", strerror(errno));
        perror("fopen");
        return 1;
    }
    //写一行数据
    fputs("hello bit!\n", pf);
    fputs("hello bit!\n", pf);
    //读一行数据
    char arr[20];
    fgets(arr,20,pf);

    printf("%s\n", arr);

    //关闭文件
    fclose(pf);
    pf = NULL;

    return 0;
}