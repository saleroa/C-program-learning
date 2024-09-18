#include<stdio.h>

void perfect(int num){
    int i,sum = 0;
    for (i = 1;i < num; i++ ){
        if (!(num % i)){
            sum += i;
        }
    }
    if (sum == num){
        printf("%d is perfect\n",num);
    }
}

int main(){
    int i,j = 1000;

    for (i=0;i<j;i++){
        perfect(i);
    }

    return 0;
}