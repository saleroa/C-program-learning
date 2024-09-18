#include<stdio.h>


// 位操作都是需要赋值的
int main(){
    char string[33];
    int num;
    int i,m;
    printf("please input num : \n");
    scanf("%d",&num);
    for(int i = 0, m =1;i<32;i++){
        string[31-i] = ((m & num)?'1':'0');
        m <<= 1;
    }
    string[32] = '\0';
    printf("the num is %s\n",string);

    return 0;
}