 #include <stdio.h>
 int main()
 {
 int a, b;
 double c, d;
 a = 19.99 + 21.99;
 b = (int)19.99 + (int)21.99;
 c = 23 / 8;
 d = 23 / 8.0;
 printf("a = %d\n",a);
 printf("b = %d\n",b);
 
 printf("c = %lf\n",c);
 printf("d = %lf\n",d);

//  printf("0/0 = %d",0/0);
 return 0;
 }