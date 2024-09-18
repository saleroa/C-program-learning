/*实验1-1程序改错与跟踪调试题源程序*/
#include <stdio.h>
#define PI 3.14159
int main() 
{
    int f;
    short p, k;
    double c, r, s;

    /* 任务1 */
    printf("Input Fahrenheit: ");
    scanf("%d", &f);
    c = 5.0 / 9.0 * (f - 32);
    printf("\n %d (F) = %.2lf (C)\n\n ", f, c);

    /* 任务2 */
    printf("input the radius r:");
    scanf("%lf", &r);
    s = PI * r * r;
    printf("\nThe acreage is %.2f\n\n", s);

    /* 任务3 */
    k = 0x1234, p = 0x5678;
    unsigned short newint = (p & 0xff00) | k >> 8;
    printf("newint = %x\n", newint);
    return 0;
}