#include <stdio.h>

int main(void)
{
	char ch;
	int i;
	float f1;
	
	f1 = i = ch = 'C';
	printf("ch = %c, i = %d, f1 = %2.2f.\n",ch,i,f1);
	ch = ch + 1;
	i = f1 + 2 * ch;
	f1 = 2.0 *ch + 1;
	printf("ch = %c, i = %d, f1 = %2.2f.\n",ch,i,f1);
	ch = 1107;
	printf("ch = %c,ch = %d,ch = %d\n",ch,ch,ch%256);
	ch = 88.89;
	printf("ch = %c,ch = %d\n",ch,ch);
}
