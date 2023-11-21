#include <stdlib.h>

void Test(void)
{
 char *str = (char *) malloc(100);
 strcpy(str, "hello");
 free(str);
 if(str != NULL)
 {
 strcpy(str, "world");
 printf(str);
 }
}

int main()
{
    Test();
    return 0;
}