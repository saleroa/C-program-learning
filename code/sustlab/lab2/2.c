#include<stdio.h>

int main(){
    // 小于 int 的类型参与计算，会被隐式转化成 int 进行计算
    // 但是 int 类型参与计算，就不会提升，所以结果也是 int 类型

    long int a = 56789;
    long b = 23456789;
    long c = a * b;
    printf("the answer is %ld\n",c);
}