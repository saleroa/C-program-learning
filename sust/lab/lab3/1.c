#include<stdio.h>
 int main()
 {
// size_t 是 unsigned，小于 0 后直接到最大的值上去
 for(size_t n = 2; n >= 0; n--)
 printf("n = %d  ");
 return 0;
 }