#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int num,sum = 0;
	bool input_is_good;
	
	printf("Please enter an integer to be summed");
	printf("(q to quit): \n");
	input_is_good = (scanf("%d",&num) == 1);
	while(input_is_good)
	{
		sum = sum + num;
		printf("Please enter next integer(q to quit):\n");
		input_is_good = (scanf("%d",&num) == 1);
	}
	printf("Those intergers sum to %d.\n",sum);
	
	return 0;
} 
