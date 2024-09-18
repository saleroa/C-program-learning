#include<stdio.h>

char *strcpy(char *s,char *t)
{
    char * p = s;
    while(*p++=*t++);
    return (s);
}

int main()
{
    char a[20],b[60]="there is a boat on the lake.";
    printf("%s\n",strcpy(a,b));
    return 0;
}


