#include<stdio.h>
int main()
{
	printf("Enter Number: \n");
	int val, loop, i[5][5];
	for(val=0;val<3;val++)
	{
		for(loop=0;loop<3;loop++)
  {
	scanf("%d",&i[val][loop]);
}
	}
	printf("Values Are\n");
	for(val=0;val<3;val++)
	{
		for(loop=0;loop<3;loop++)
		{   
			printf("%d \t",i[val][loop]);
		}
		printf("\n");
	}
}
