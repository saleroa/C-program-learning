#include"stuinfo.h"


// // scanf 可以对多个变量进行输入，但是要用 , 隔开，如果是空格代表输入结束
// int main(){
//     stuinfo stus [3];
//     inputstu(stus,3);
//     showstu(stus,3);
//     return 0;
// }



#include<stdio.h>

int main(){
    int a = 0,b = 0,c = 0;
    // scanf 的 format 的排列方式和输入方式一致
    scanf("%d %d %d",&a,&b,&c);
    printf("a is %d, b is %d, c is %d\n",a,b,c);
    return 0;
}