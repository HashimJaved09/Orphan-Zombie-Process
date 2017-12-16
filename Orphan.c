#include<stdio.h>

void main()
{
	int cpid = fork();
	if (cpid == 0)
	{
		printf("Child\n");
		while(1);
	}
	else
	{
		printf("Parent\n");
	}
}
