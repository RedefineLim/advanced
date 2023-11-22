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
        printf("%s\n", strerror(errno));
        return 1;
    }
    // 写文件
    char i = 0;
    for(i='a';i<='z';i++)
        fputc(i, pf);

    //读文件
    int ch = 0;
    while(ch = fgetc(pf) != EOF)
    {
        printf("%c ", ch);
    }
    //关闭文件
    fclose(pf);
    pf == NULL;

    return 0;
}