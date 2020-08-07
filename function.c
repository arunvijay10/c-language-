#include<stdio.h>
#include<stdlib.h>
void sum();
int main()
{
	sum();
	return 0;
}
void sum()
{
	int i,j,sum;
	printf("Enter Two Number's\n");
	printf("Enter Here first Number: \n");
	scanf("%d",&i);
	printf("Enter Here Second Number: \n");
	scanf("%d",&j);
	sum = i+j;
	printf("So Total Of Your Number is %d",sum);
}
