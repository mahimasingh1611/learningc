#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// this is a comment!!

// what is a function
// return type function_name (argument data type argument_name)

int mul(int x, int y)
{
	int result = x*y;
	return result;
}

int add(int x,int y)
{
	int res=x+y;
	return res;
}

int sub(int x,int y)
{
	int res=x-y;
	return res;
}

float division(int x,int y)
{
	float res=x/y;
	return res;
}

int main ()
{
	printf("Hello world\n");
	int i,j,k;
	printf("enter the value of 1st number\n");
	scanf("%d",&i);
	printf("enter the value of 2nd number\n");
	scanf("%d",&j);
	printf("multiplication=%d\n", mul(i,j));
	printf("addition=%d\n",add(i,j));
	printf("subtract=%d\n",sub(i,j));
	printf("division=%f\n",division(i,j));

	printf("sizeof(char)=%ld\n", sizeof(char));
	printf("sizeof(int)=%ld\n", sizeof(int));
	printf("sizeof(float)=%ld\n", sizeof(float));
	printf("sizeof(double)=%ld\n", sizeof(double));
	printf("sizeof(short int)=%ld\n", sizeof(short int));
	printf("sizeof(long int)=%ld\n", sizeof(long int));
	printf("sizeof(long double)=%ld\n", sizeof(long double));
	//printf("sizeof(long long double)=%ld\n", sizeof(long long double));
	printf("sizeof(long long int)=%ld\n", sizeof(long long int));

	char* command;
	while (1)
	{
		printf("user@user: ");
		command = (char *) malloc (sizeof(char) * 256);
		scanf("%s",command);
		printf("Executing: %s\n", command);
		if (!strcmp(command,"exit"))
		{
			break;
		}
		else if (!strcmp(command,"date"))
		{
			system(command);
		}
		else
		{
			int count = 0;
			for (count = 0; command[count] != '\0'; count++)
			{
				//printf("%c\n", command[count]);
			}
			printf("You have entered %d characters, which doesn't make sense to me\n", count);
		}
		free(command);
	}

	return 0;

}
