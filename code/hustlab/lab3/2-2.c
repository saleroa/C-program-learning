#include <stdio.h>
double mulx(double x, int n);
long fac(int n);

//
double sum(double x, int n)
{
    int i;
    double z = 1.0;
    long temp = 1;
    for (i = 1; i <= n; i++)
    {   
        temp *= i;
        z = z + mulx(x, i) / temp;
    }
    return z;
}
double mulx(double x, int n)
{
    int i;
    double z = 1.0;
    for (i = 0; i < n; i++)
    {
        z = z * x;
    }
    return z;
}
// xiu
// long fac(int n)
// {
//     int i;
//     long h = 1;
//     for (i = 2; i <= n; i++)
//     {
//         h = h * i;
//     }
//     return h;
// }
int main()
{
    double x;
    int n;
    printf("Input x and n:");
    scanf("%lf%d", &x, &n);
    printf("The result is %lf:\n", sum(x, n));
    return 0;
}


// #include <stdio.h>
// double mulx(double x, int n);
// long fac(int n);
// double sum(double x, int n)
// {
//     int i;
//     double z = 1.0;
//     for (i = 1; i <= n; i++)
//     {
//         z = z + mulx(x, i) / fac(i);
//     }
//     return z;
// }
// double mulx(double x, int n)
// {
//     int i;
//     double z = 1.0;
//     for (i = 0; i < n; i++)
//     {
//         z = z * x;
//     }
//     return z;
// }
// long fac(int n)
// {
//     int i;
//     long h = 1;
//     for (i = 2; i <= n; i++)
//     {
//         h = h * i;
//     }
//     return h;
// }
// int main()
// {
//     double x;
//     int n;
//     printf("Input x and n:");
//     scanf("%lf%d", &x, &n);
//     printf("The result is %lf:", sum(x, n));
//     return 0;
// }