#include <stdio.h>
int main(void)
{
	short a=0x253f,b=0x7b7d;
	char ch;
	FILE *fp1,*fp2;
	// 二进制写入，小端法
	fp1=fopen("a","wb+");
    fp2=fopen("b","w+");
	fwrite(&a,sizeof(short),1,fp1);
	fwrite(&b,sizeof(short),1,fp1);   
	fprintf(fp2,"%hx %hx",a,b); 

    rewind(fp1); rewind(fp2);
	while((ch = fgetc(fp1)) != EOF) 
		putchar(ch);
	putchar('\n');
	while((ch = fgetc(fp2)) != EOF) 
		putchar(ch);
	putchar('\n');
	fclose(fp1);
	fclose(fp2);
 return 0;
}


// 检测出来是小端机器
// #include <stdio.h>
// int main() {
//     unsigned int test = 1; // 0x00000001
      // (char*)&test 转换了读取 test 的方式,
      // 一开始指针指向 int 的四个字节空间，转化成 char 后就指向一个字节空间了
//     char *p = (char*)&test;
//     if (*p == 1) {
//         printf("This system is little-endian.\n");
//     } else {
//         printf("This system is big-endian.\n");
//     }
    
//     return 0;
// }
