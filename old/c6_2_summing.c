#include <stdio.h>

int main(void)
{
	int num,sum = 0;
	
	printf("Please enter an integer to be summed");
	printf("(q to quit): \n");
	while(scanf("%d",&num) == 1)
	{
		sum = sum + num;
		printf("Please enter next integer(q to quit):\n");
	}
	printf("Those intergers sum to %d.\n",sum);
	
	return 0;
} 
