#include <stdio.h>

int main ()
{
	printf("Hello world\n");
	int i = 3,j;
	j = ++i;
	printf("pre increment operator = %d\n", j);
	j = i++;
	printf("post increment operator = %d\n", j);
	if(i%2==0)
	{
		printf("even\n");
	}
	else
	{
		printf("odd\n");
	}
	return 0;

}
