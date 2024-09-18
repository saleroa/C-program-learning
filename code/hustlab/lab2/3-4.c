#include <stdio.h>
int main(void)
{
	for (int num = 100;num < 1000;num++)  // 遍历所有三位数
	{
		if ((num == ((num * num)%1000) || num == (num * num) % 100) && (num <= 999))  // 题目条件
			{
				printf("%d\n", num) ;
			}	
	}
	return 0 ;
}