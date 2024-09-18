#include<stdio.h>


int main(){
    float salary,tax;
    printf("please input your salary :\n");
    scanf("%f",&salary);
    int mod = salary / 1000;
    switch (mod){
        case 0: 
            tax = 0;
            break;
        case 1: 
            tax = 0.05 * (salary-999);
            break;
        case 2:
            tax = 50 + (salary - 1999) * 0.1;
            break;
        case 3:
            tax = 100 + 50 + (salary - 2999) * 0.15;
            break;
        case 4:
            tax = 150 + 100 + 50 + (salary - 3999) * 0.2;
            break;
        default:
            tax = 50 + 100 + 150 + 200 + (salary - 4999) * 0.25;
            break;
    }

    printf("the tax is : %f\n",tax);

    return 0;
}