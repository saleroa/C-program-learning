#include <stdio.h>
int main()
{
    int m, n, k, p, i, d;
    printf("input m, n \n");
    scanf("%d%d", &m, &n);
    if (m < n) /* 交换m和n */ 
    {
        /*a = a ^ b; // 第一步：a现在包含a和b的异或结果
b = a ^ b; // 第二步：b现在变为原来的a（因为a^b^b = a）
a = a ^ b; // 第三步：a现在变为原来的b（因为a^a^b = b）*/
        m = m ^ n;
        n = n ^ m;
        m = m ^ n;
        // int t;
        // t = m;
        // m = n;
        // n = t;
    }
    k = 0;
    while ((m & 0x0001) == 0 && (m & 0x0001) == 0) /* m和n均为偶数 */ 
    // while (m % 2 == 0 && n % 2 == 0) /* m和n均为偶数 */ 
    {
        m << 1; /* 用2约简m和n */
        n << 1;
        // m /= 2; /* 用2约简m和n */
        // n /= 2;
        k++;
    }
    for (p = 1, i = 0; i < k; i++)
        p << 1; /* 求p=2k */ 
        // p *= 2; /* 求p=2k */ 
    while ((d = m - n) != n)
    {
        d>n ? (m = d):(m = n,n =d); 
        // if (d > n)
        //     m = d;
        // else
        // {
        //     m = n;
        //     n = d;
        // }
    }
    d *= p;
    printf("the greatest common divisor : %d", d);
    return 0;
}