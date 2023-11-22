#include <stdio.h>
#include <string.h>

struct S
{
    char arr[10];
    int age;
    float score;
};

// int main()
// {
//     struct S s = {"zhangsan", 25, 50.5f};
//     FILE* pf = fopen("test.txt", "w");
//     if(pf == NULL)
//     {
//         perror("fopen");
//         return 1;
//     }
//     //int fprintf( FILE *stream, const char *format [, argument ]...);
//     fprintf(pf, "%s %d %f",s.arr ,s.age ,s.score );

//     fclose(pf);
//     pf = NULL;
//     return 0;
// }

int main()
{
    struct S s = {0};
    FILE* pf = fopen("test.txt", "w");
    if(pf == NULL)
    {
        perror("fopen");
        return 1;
    }
    //int fprintf( FILE *stream, const char *format [, argument ]...);
    // fprintf(pf, "%s %d %f",s.arr ,s.age ,s.score );

    //读
    //int fscanf( FILE *stream, const char *format [, argument ]... );
    fscanf(pf, "%s %d %f", &(s.arr), &(s.age), &(s.score));  //读
    fprintf(pf,"%s %d %f", s.arr, s.age, s.score);  //写
    
    fclose(pf);
    pf = NULL;
    return 0;
}