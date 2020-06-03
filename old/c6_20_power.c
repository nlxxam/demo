#include <stdio.h>
double power(double n,int p);

int main(void)
{
	double x,xpow;
	int exp;
	
	
	
	while(scanf("%lf%d",&x,&exp) == 2)
	{
		xpow = power(x,exp);
		printf("xpow = power(x,exp):\n%.2lf = power(%.2lf,%d)",xpow,x,exp);
	}
}

double power(double n,int p)
{
	double pow = 1;
	int i;
	
	for(i = 1; i <= p; i++)
	{
		pow *= n;
	}
	return pow;
}


