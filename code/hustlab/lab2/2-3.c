#include <stdio.h>

int check(int num)
{
    int i, k;
    for (i = 2, k = (num >> 1); i <= k; i++)
        if (!(num % i))
        {
            return 1;
        }
    return 0;
}

int main()
{
    for (int i = 100;i < 1000;i++){
        if (check(i) && check(i/10) && check(i/100)){
          printf("%d  ",i);
        }
    }
    return 0;
}