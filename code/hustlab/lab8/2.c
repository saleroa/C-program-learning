#include<stdio.h>
#include<stdlib.h>

// version（1）
// int main(int argc, char* argv[])
// {
// 	char ch;
// 	FILE *fp;
// 	if(argc!=2){
// 		printf("Arguments error!\n");
// 		exit(-1);
// 	}
// 	if((fp=fopen(argv[1],"r"))==NULL){        /* fp 指向 filename */
// 		printf("Can't open %s file!\n",argv[1]);
// 		exit(-1);
// 	}
// 	while((ch=fgetc(fp))!=EOF)          /* 从filename中读字符 */
// 	   putchar(ch);                  /* 向显示器中写字符 */
// 	fclose(fp);   
// 	printf("\n");                   /* 关闭filename */
//  return 0;	
// }


int main(int argc, char* argv[])
{
	char ch;
	FILE *fp;
	if(argc!=2){
		printf("Arguments error!\n");
		exit(-1);
	}
	if((fp=freopen(argv[1],"r",stdin))==NULL){        /* fp 指向 filename */
		printf("Can't open %s file!\n",argv[1]);
		exit(-1);
	}
	// 修改处，从 stdin 中获取
	while((ch=getchar())!=EOF)         
	    putchar(ch);                  /* 向显示器中写字符 */
	fclose(fp);   
	printf("\n");                   /* 关闭filename */
 return 0;	
}