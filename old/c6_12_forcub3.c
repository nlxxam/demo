#include <stdio.h>

int main(void)
{
	int num;
	
	printf("   n     n cubed\n");
	for(num = 6;num <= 60; num = num+12)
	{
		printf("%5d %5d\n",num,num*num*num);
	}
	
	return 0;
}
