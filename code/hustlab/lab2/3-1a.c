#include<stdio.h>

int main(){
    float salary,tax;
    printf("please input your salary :\n");
    scanf("%f",&salary);
    if (salary < 1000){
        tax = 0;
    }else if(1000 <= salary && 2000 > salary){
        tax = 0.05 * (salary-999);
    }else if(2000 <= salary && 3000 > salary){
        tax = 50 + (salary - 1999) * 0.1;
    }else if(3000 <= salary && 4000 > salary){
        tax = 100 + 50 + (salary - 2999) * 0.15;
    }else if(4000 <= salary && 5000 > salary){
        tax = 150 + 100 + 50 + (salary - 3999) * 0.2;
    }else{
        tax = 50 + 100 + 150 + 200 + (salary - 4999) * 0.25;
    }
    
    printf("the tax is : %f\n",tax);

    return 0;
}