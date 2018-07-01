#include <stdio.h>

int main ()
{
	printf("Hello world\n");
	int i = 3,j;
	j = ++i;
	printf("pre increment operator = %d\n", j);
	j = i++;
	printf("post increment operator = %d\n", j);
	return 0;
}
