#include<stdio.h>
int main()
{
	printf("Enter Number:\n");
	int i;
	int num[2];
	
	for(i=0;i<2;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<2;i++)
	{
		printf("This Number's You Have added %d\n",num[i]);
	}
}
