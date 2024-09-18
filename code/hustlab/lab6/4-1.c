#include<stdio.h>

int main(){
    long int num;
    scanf("%ld",&num);
    // 通过指针来移动获取每 8 位
    char * add = (char*)&num;
    // add 一开始在最末尾
    add += 3;
    int high = 0xf0,low = 0x0f;
    for(int i = 0;i<4;i++){
        printf("%x\t",((*add)&high) >> 4);
        printf("%x\t",((*add)&low));
        add--;
    }
    return 0;
}

