#include <stdio.h>
#include <stdlib.h>

struct S
{
    char arr[10];
    int age;
    float score;
};

int main()
{
    struct S s ={"zhangsan", 25, 50.5f};
    //以二进制写入文件中
    FILE* pf = fopen("text.txt", "wb");
    if(pf == NULL)
    {
        perror("test");
        return -1;
    }
    // //size_t fwrite( const void *buffer, size_t size, size_t count, FILE *stream );
    // fwrite(&s, sizeof(struct S), 1, pf);

    // //size_t fread( void *buffer, size_t size, size_t count, FILE *stream );
    // fread(&s, sizeof(struct S), 1, pf);
    printf("%s %d %f\n", s.arr, s.age, s.score);

    fclose(pf);
    pf = NULL;

    return 0;
}