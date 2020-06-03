#include <stdio.h>
#include <inttypes.h>

int main(void)
{
	int32_t me32;
	
	me32 = 1234;
	
	printf("me32 = %d\n",me32);
	printf("me32 = %" PRId32 "\n",me32);
	
	return 0;
}
