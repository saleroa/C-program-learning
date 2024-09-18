#include <stdio.h>

long long sum_fac(int n);
int main(void)
{
    int k;
    for (k = 1; k <= 20; k++)
        printf("k=%d\tthe sum is %lld\n", k, sum_fac(k));
    return 0;
}
long long sum_fac(int n)
{
    long long s = 0,fac;
    int i, j;
    for (i = 1; i <= n; i++)
    {
        fac = 1;
        for (j = 1; j <= i; j++)
            fac *= j;
        s += fac;
    }

   
    return s;
}