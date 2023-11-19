#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//memcmp
//int memcmp( const void *buf1, const void *buf2, size_t count );


int main()
{
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {1,3,2};

    int ret = memcmp(arr1, arr2,12);
    printf("%d\n", ret);

    system("pause");
    return 0;
}