#include<stdio.h>

int check(int num){
    int i,k;
    for (i =2,k= num>>1;i <= k;i++){
        if (!(num % i)){
            return 0;
        }
    }
    return 1;
}

void guess(int num){
    for ( int i =2;i<=(num >> 1);i++){
        if (check(i) && check(num-i)){
            printf("%d = %d + %d \n",num,i,(num-i));
            return;
        }
    }
    printf("%d is not\n",num);
    return;
}

int main(){
    int num = 0;
    printf("输入一个大于4的偶数\n") ;
    while( scanf("%d",&num) != EOF){
    
        if (!(num & 0x0001) && (num >= 4)){
            guess(num);
        }else{
            printf("its not oushu or its smaller than 4\n");
        }
    }
    return 0;
}