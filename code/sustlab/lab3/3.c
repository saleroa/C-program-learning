 #include <stdio.h>
 int main()
 {
 int n,fa;
 printf("%d,%d",n,fa);
 do{
 fa *= n;
 n++;
 }while(n <= 10);
 printf("fa = %d\n",fa);
 return 0;
 }