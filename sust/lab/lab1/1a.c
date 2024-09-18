#include<stdio.h>

int main(){

    // float / double
    // 控制小数位数, " %.[precision]f"
    float a = 0.1f;
    float b = 0.2f;
    float c = 0.3f;
    
    printf("a is %.2f\n",a);
    printf("b is %.2f\n",b);
    printf("c is %.2f\n",c);

    // int
    // 控制最小输出宽度，"%[width]d"
    int ia = 101;

    printf("ia is %10d",ia);
    return 0;
}