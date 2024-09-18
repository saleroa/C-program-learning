#include<stdio.h>

void swap(int& n1,int & n2);
int main(){
    int a = 1,b = 2;
    printf("a is :%d , b is :%d\n",a,b);
    swap(a,b);
    printf("a is :%d , b is :%d\n",a,b);
    return 0;
}

void swap(int& n1,int & n2){
    int temp = n2;
    n2 = n1;
    n1 = temp;
}