#include <stdio.h>

int main(void)
{
	printf("sizeof(int) = %d,sizeof(char) = %d,sizeof(long) = %d,sizeof(short) = %d,sizeof(double) = %d\n",
	sizeof(int),sizeof(char),sizeof(long),sizeof(short),sizeof(double));
	printf("sizeof(float) = %d,sizeof(long long int) = %d,sizeof(long double) = %d",
	sizeof(float),sizeof(long long int),sizeof(long double));
	
	return 0;
}
