#include<stdio.h>

int main(){
    char ch;
    // 输入函数返回 EOF 和 读取到 EOF
    while(scanf("%c",&ch) != EOF){
        if (ch ==' '){
            while(ch == ' '){
                scanf("%c",&ch);
            }
            putchar(' ');
            putchar(ch);
        }else{
            putchar(ch);
        }
    }
    return 0;
}