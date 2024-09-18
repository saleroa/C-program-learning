#include<stdio.h>

// 可以限制结构体字段的位数
struct bits {
	int bit0 : 1;
	int bit1 : 1;
	int bit2 : 1;
	int bit3 : 1;
	int bit4 : 1;
	int bit5 : 1;
	int bit6 : 1;
	int bit7 : 1;
}b; // 一种声明方法
void f0(){printf("the function0 is called!\n");}
void f1(){printf("the function1 is called!\n");}
void f2(){printf("the function2 is called!\n");}
void f3(){printf("the function3 is called!\n");}
void f4(){printf("the function4 is called!\n");}
void f5(){printf("the function5 is called!\n");}
void f6(){printf("the function6 is called!\n");}
void f7(){printf("the function7 is called!\n");}
int main(){
    void(*p_fun[])() = {
        f0,f1,f2,f3,f4,f5,f6,f7,
    };
    char order[9];
    printf("please input your order:\n");
    scanf("%s",order);
    b.bit0 = order[0]-'0';
    b.bit1 = order[1]-'0';
    b.bit2 = order[2]-'0';
    b.bit3 = order[3]-'0';
    b.bit4 = order[4]-'0';
    b.bit5 = order[5]-'0';
    b.bit6 = order[6]-'0';
    b.bit7 = order[7]-'0';
    if(b.bit0) p_fun[0]();
    if(b.bit1) p_fun[1]();
    if(b.bit2) p_fun[2]();
    if(b.bit3) p_fun[3]();
    if(b.bit4) p_fun[4]();
    if(b.bit5) p_fun[5]();
    if(b.bit6) p_fun[6]();
    if(b.bit7) p_fun[7]();
    return 0;
}