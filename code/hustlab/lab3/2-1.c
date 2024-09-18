#include<stdio.h>

long long sum_fac(int n){
    // 退出条件
    if (n == 1){
        return 1;
    }
    // 中间计算过程
    long long fac = 1,sum = 0;
    for (int i =1;i <= n;i++){
        fac *= i;
    }
    sum = fac + sum_fac(n-1);

    return sum;
}

int main(){
    printf("%lld\n",sum_fac(20));
}