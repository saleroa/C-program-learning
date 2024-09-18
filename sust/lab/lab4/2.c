#include <stdio.h>
// typedef union data
// {
//     int n;
//     char ch;
//     short m;
// }data ;
// int main()
// {
//     union data a;
//     printf("%d, %d\n", sizeof(a), sizeof( data));
//     a.n = 0x40;
//     printf("%X, %c, %hX\n", a.n, a.ch, a.m);
//     a.ch = '9';
//     printf("%X, %c, %hX\n", a.n, a.ch, a.m);
//     a.m = 0x2059;
//     printf("%X, %c, %hX\n", a.n, a.ch, a.m);
//     a.n = 0x3E25AD54;
//     printf("%X, %c, %hX\n", a.n, a.ch, a.m);
//     return 0;
// }

typedef union data{
  int i;
  char ch;
}data;

int main(){
    data a;
    a.i = 0;
    printf("%X\n",a);
    a.ch = -1;
    printf("%x",a);
    return 0;
}