#include <stdio.h>

int main(void)
{
	int i = 2147483647;
	unsigned int j = 4294967295;
	
	printf("%d\t%d\t%d\t\n",i,i+1,i+2);
	printf("%u\t%u\t%u\t",j,j+1,j+2);
	
	return 0;
} 
