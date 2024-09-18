#include<stdio.h>
int main(){
    signed char a = 127;
    unsigned char b = 0xff;
    unsigned char c = 0;
 
    a++;
    b++;
    c--;
    printf("a=%d\nb=%d\nc=%d\n",a,b,c);
    return 0;
}