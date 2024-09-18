#include<stdio.h>


double power(double base, int exponent) {
    double result = 1.0;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int len(int n){
    int len = 0;
    while(n != 0){
    n = n / 10;
    len++;
    }
    return len;
}
int check(int num){

    int sum = 0,top = num;
    int length = len(num);

    for (int i = 0;i<length;i++){
        sum += power(((float)(num % 10)),(float)length);
        num /= 10;
    }
    if (top == sum){
        return 1;
    }
    return 0;
}

int main(){
    printf("%d",check(407));
    int num;
    while(1){
        printf("please input num : \n");
        scanf("%d",&num);
        if (num == 0){
            return 0;
        }
        int min = power(10.0,(float)num - 1);
        int max = 10 * min;
        for (int i = min; i < max;i++){
            if (check(i)){
                printf("%d is \n",i);
            }
        }
    }
}