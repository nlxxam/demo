#include <stdio.h>

int main(void)
{
	int status,num,sum = 0;
	
	printf("Please enter an integer to be summed");
	printf("(q to quit): \n");
	status = scanf("%d",&num);
	while(status = 1)
	{
		sum = sum + num;
		printf("Please enter next integer(q to quit):\n");
		status = scanf("%d",&num);
	}
	printf("Those intergers sum to %d.\n",sum);
	
	return 0;
} 
