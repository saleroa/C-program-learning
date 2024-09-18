#include <stdio.h>

int main()
{
    unsigned long ip;
    unsigned char ad1, ad2, ad3, ad4;
    printf("please input ip :\n");

    while (scanf("%lu", &ip) != EOF)
    {
        ad1 = (ip & 0xff000000) >> 24;
        ad2 = (ip & 0x00ff0000) >> 16;
        ad3 = (ip & 0x0000ff00) >> 8;
        ad4 = (ip & 0x000000ff);
        printf("%d.%d.%d.%d\n",ad1,ad2,ad3,ad4);
    }

    return 0;
}