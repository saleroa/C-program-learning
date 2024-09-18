#include<stdio.h>

int main(){
    // d 是 十进制int, hd 是 十进制short
    // x 是 十六进制 int，hx 是十六进制 short
    // o 是 八进制 int, ho 是八进制 short
    short x,m,n;
    short res;
    printf("please put in x:\n");
    scanf("%hx",&x);
    printf("please put in m,n\n");
    scanf("%hd %hd",&m,&n);

    if (0 <= m && m <= 15 && 1 <= n && n <= 16-m){
        // x >>= m;
        // x <<= (16-n);
        res = (x >> m) << (16 - n);
    }else{
        printf("wrong input");
        return 0;
    }

    printf("%x\n",res);

    return 0;
}

