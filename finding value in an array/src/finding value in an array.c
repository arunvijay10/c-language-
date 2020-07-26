

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int array[10],flag=0, searchkey,limit, i , search;
	printf("Enter The Limit");
	scanf("%d",&limit);
	for(i=0;i<limit;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<limit;i++){
		printf("this is the value you have entered %d\n",array[i]);
	}
	printf("Enter the Number to Search: \n");
	scanf("%d",&searchkey);
	for(i=0;i<limit;i++)
	{
		if(searchkey==array[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("Found the value");
	}else
	{
		printf("Value Not Found");
	}
}
