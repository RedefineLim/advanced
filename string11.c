#include <stdio.h>
#include <stdlib.h>

//带空格直角三角形图案

int main()
{
    int n = 0;
    while(scanf("%d", &n) == 1)
    {
        int i = 0;
        int j = 0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i+j<n-1)
                    printf("  ");
                else    
                    printf("* ");
            }
            printf("\n");
        }
    }

    system("pause");
    return 0;
}