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
    struct S s = {0};
    FILE* pf = fopen("test.txt", "r");
    if(pf==NULL)
    {
        perror("fopen");
        return -1;
    }
    fscanf(pf, "%s %d %f", &(s.arr), &(s.age), &(s.score));
    fprintf(stdout, "%s %d %f\n", s.arr, s.age, s.score);

    pf = NULL;
    
    return 0;
}