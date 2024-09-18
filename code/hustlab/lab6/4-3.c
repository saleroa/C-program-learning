#include<stdio.h>
#include<malloc.h>
#include<string.h>
char* delspc(char*);
int main(void) {
	int num=0;
	scanf("%d", &num); 

	getchar();//防止读取到换行符

	printf("please input string\n");
	char *ch_list[num], ch[80];
	for (int i=0; i<num; i++) {
		gets(ch);
		char *ptr=ch;
		ptr = delspc(ptr);
		ch_list[i] = (char*)malloc(strlen(ptr)+1);
		strcpy(ch_list[i], ptr);
	}
	for (int i=0; i<num; i++) {
		printf("%s\n", ch_list[i]);
		free(ch_list[i]); 
	}
	return 0;
}

char* delspc(char *ch) {
    while (*ch == ' ' || *ch == '\t') {
        ch++;
    }
    return ch;
}