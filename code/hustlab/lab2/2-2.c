#include <stdio.h>
int main()
{
    int i, x, k, flag ;
    printf("本程序判断合数，请输入大于1的整数，以Ctrl+Z结束\n");
    while (scanf("%d", &x) != EOF)
    {
        flag = 0;
        i = 1;
        do{
             if (!(x % i) && (i != 1))
            {
                flag = 1;
                break;
            }
            i++;

        }while(i < x);
        if (flag)
            printf("%d是合数\n", x);
        else
            printf("%d不是合数\n", x);
    }
    return 0;
}