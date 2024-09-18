#include<stdio.h>
#include<math.h>
#define S(a,b,c) (s) = ((a + b + c) /2)
#define AREA(a,b,c) pow(((s-a)*(s-b)*(s-c)*s),0.5)
int main(){
    int a,b,c,s;
    printf("please input a,b,c:\n");
    // scanf 会返回读取到多少个参数
    while(scanf("%d %d %d",&a,&b,&c) == 3){
        if ((a+b>c)&&(a+c>b)&&(c+b>a)){
            S(a,b,c);
            printf("the area is %lf",AREA(a,b,c));
        }else {
			printf("%d,%d,%d三边无法组成三角形!\n",a,b,c);
		}
    }
    return 0;
}