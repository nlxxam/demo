#include <stdio.h>
#define PERIOD '.'

int main(void)
{
	char ch;
	int count = 0;
	
	while((ch = getchar()) != PERIOD)
	{
		if(ch != '"' && ch != '\'')
		{
			count++;
		}
	}
	printf("There are %d non-quote charccters.\n",count);
	
	return 0;
}
