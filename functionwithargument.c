#include<stdio.h>
#include<stdlib.h>
void add(int,int);
int main()
{
	printf("Enter Two Number:\n");
	int num1,num2;
	scanf("%d%d",&num1,&num2);
	add(num1,num2);
	
}
void add(int upper1,int upper2)
{
	int sum;
	sum = upper1+upper2;
	printf("The sum of two Number is %d",sum);
}
