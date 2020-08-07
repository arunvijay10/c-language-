#include<stdio.h>
#include<stdlib.h>
int value(int,int);
int main()
{
	printf("Enter Two Number:\n");
	int num1,num2,theanswerstoredfromreturnedvalue;
	scanf("%d %d",&num1,&num2);
	theanswerstoredfromreturnedvalue=value(num1,num2);
	printf("your Value is %d",theanswerstoredfromreturnedvalue);
	
}
int value(int upper1, int upper2)
{
	int sum;
	sum=upper1+upper2;
	return sum;
}
