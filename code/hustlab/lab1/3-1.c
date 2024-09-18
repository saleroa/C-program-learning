#include<stdio.h>


// EOF 文件结束符号在 windows 是 Ctrl z
// 但是在 linux 中是， ctrl d
int main(){
    while(1){
        char ch = getchar();
        // 大写
        if (ch >= 65 && ch <= 90){
            putchar(ch+32);
        }else if (ch == EOF){
            printf("ctrl z, stop");
            break;
        }else{
            putchar(ch);
        }
    }
    return 0;
}