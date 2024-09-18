#include<stdio.h>

char *strcopy(char *, const char *);
int main(void)
{
	// 字符数组的指针 相当于是 char * const，不能修改指向
	// char * s1, *s2, *s3;

	char a = 1,b = 2;
	// char * s1 = &a, *s2 = &b, s3[10];
	char * s1 = &a, *s2 = &b, *s3;

	// char s1[100],s2[100];
	// char * s3;

	printf("Input a string:\n");
	scanf("%s", s2);

	strcopy(s1, s2);
	printf("%s\n", s1);
	printf("Input a string again:\n");
	scanf("%s", s2);
	//
	s3 = strcopy(s1, s2);
	printf("%p\n", s3);
	return 0;
}
/*将字符串s复制给字符串t，并且返回串t的首地址*/
char * strcopy(char *t, const char *s)
{
	char * head = t;
	// 这个语句会一直循环，直到 s 遇到 '\0'
	while(*t++ = *s++);
	return head;
}