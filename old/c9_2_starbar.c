#include <stdio.h>
#include <string.h>
#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
#define SPACE ' '
#define START '*'

void show_n_char(char ch, int num);

int main(void)
{
	show_n_char(START,WIDTH);
	putchar('\n');
	
	show_n_char(SPACE,(WIDTH-strlen(NAME))/2);
	printf("%s",NAME);
	show_n_char(SPACE,(WIDTH-strlen(NAME))/2);
	putchar('\n');
	
	show_n_char(SPACE,(WIDTH-strlen(ADDRESS))/2);
	printf("%s",ADDRESS);
	show_n_char(SPACE,(WIDTH-strlen(ADDRESS))/2);
	putchar('\n');
	
	show_n_char(SPACE,(WIDTH-strlen(PLACE))/2);
	printf("%s",ADDRESS);
	show_n_char(SPACE,(WIDTH-strlen(PLACE))/2);
	putchar('\n');
	show_n_char(START,WIDTH);
	
	return 0;
}

void show_n_char(char ch, int num)
{
	int count;
	
	for(count = 1; count <= num; count++)
	{
		putchar(ch);
	}
	
	return;
}
