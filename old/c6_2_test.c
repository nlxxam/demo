#include <stdio.h>

int main(void)
{
    short index = 1;
	int i = 0;
	
	while(--index < 5)
	{
		printf("%d\tGood moring!\n",i);
		i++;
	}
	
	return 0;
}
