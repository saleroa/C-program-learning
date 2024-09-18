
#include<stdio.h>
#define CHANGE 1



// 宏里的 if elif endif 需要在一个区域内

int main(){
    char ch;
    while(scanf("%c",&ch) != EOF){
        #if CHANGE == 1
        if (ch >= 65 && ch <= 90){
            putchar(ch+32);
        }else if(ch >= 97 && ch <= 122){
            putchar(ch-32);
        }else{
            putchar(ch);
        }
        #elif CHANGE == 0
        putchar(ch);
        #endif
    }
 
    return 0;
}