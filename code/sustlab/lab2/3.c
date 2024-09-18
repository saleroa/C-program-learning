#include <stdio.h>
#include <math.h>
int main() 
{
 float f1 = 1.0f;
 printf("f1 = %.10f\n",f1);
 float a = 0.1f;
 float f2 = a+a+a+a+a+a+a+a+a+a;
 printf("f1 = %.10f\n",f2);
 if(f1 == f2)
 {
 printf("f1 = f2");
 }else
 {
 printf("f1 != f2");
 }
 if (fabs(f1-f2) < __FLT_EPSILON__){
    printf("they are almost equal");
 }else{
    printf("not");
 }
 return 0;
 }