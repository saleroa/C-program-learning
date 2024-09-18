#include <stdio.h>
#include <malloc.h>
#include <string.h>
#define N 4
/*对指针数组s指向的size个字符串进行升序排序*/

// 数组版本
void strsort(char *s[], int size)
{
    char * temp;
    int i, j;
    for (i = 0; i < size - 1; i++)
        for (j = 0; j < size - i - 1; j++)
            // strcmp 函数会逐个对比字符，计算 strcmp(a,b) 相当于 “a-b”
            if (strcmp(s[j],s[j+1]) == 1)
            {
                temp = s[j];
                s[j] = s[j+1];
                s[j + 1] = temp;
            }
}

// 指针版本
void strsort1(char **s, int size)
{
    char * temp;
    int i, j;
    for (i = 0; i < size - 1; i++)
        for (j = 0; j < size - i - 1; j++)
            // strcmp 函数会逐个对比字符，计算 strcmp(a,b) 相当于 “a-b”
            if (strcmp(*(s+j),*(s+j+1)) > 0)
            {
                // 对于数组 a，a[i] 等价于 *(a+1)
                // 对于地址 a，a+1，还是a类型的指针，只是位置不同
                temp = *(s+j);
                *(s+j) = *(s+j+1);
                *(s+j+1) = temp;
            }
}



int main()
{
    int i;
    char *s[N], t[50];
    for (i = 0; i < N; i++)
    {
        gets(t);
        s[i] = (char *)malloc(strlen(t) + 1);
        strcpy(s[i],t);
    }
    // strsort1(s,N);
    strsort(s,N);
    for (i = 0; i < N; i++)
    {
        puts(s[i]);
        free(s[i]);
    }
    return 0;
}