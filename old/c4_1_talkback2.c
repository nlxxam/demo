#include <stdio.h>
#include <string.h>
#define PRAISE "You are an extraordinary being."

int main(void)
{
	char name[40];
	
	printf("what's your name?\n");
	scanf("%s",name);
	printf("Hello,%s.%s\n",name,PRAISE);
	printf("Your name of %zd letters occupies %zd memory cells.\n",strlen(name),sizeof(name));
	printf("The praise has %zd letters and occupies %zd memory cells.\n",strlen(PRAISE),sizeof(PRAISE));
	
	return 0;
}
