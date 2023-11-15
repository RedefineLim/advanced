#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//size_t strlen( const char *string );

int main()
{
    char arr[] = {'a', 'b' ,'c', 'd', 'e', 'f'};
    printf("%d\n" ,strlen(arr));    //随机值
    printf("%d\n" ,strlen(arr+0));  //随机值
    printf("%d\n" ,strlen(*arr));   //？    //---->strlen('a')------>strlen('97)------>野指针问题
    printf("%d\n" ,strlen(arr[1])); //野指针
    printf("%d\n" ,strlen(&arr)); //全部转换成const char*类型，所以也是随机值
    printf("%d\n" ,strlen(&arr + 1));   //前面的随机值减去6
    printf("%d\n" ,strlen(&arr[0] + 1));    //前面的随机值减去1

    system("pause");
    return 0;
}

//虚拟地址---->物理地址