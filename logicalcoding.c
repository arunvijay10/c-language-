#include<stdio.h>
#include<stdlib.h>
int mult(int,int);
int divide(int,int);
int main()
{
	printf("Choose One: ?\n");
	printf("1 for Multiple\n");
	printf("2 for Divide\n");
	int userinput;
	int value1,value2;
	int storedvalue;
	scanf("%d",&userinput);
	if(userinput==1)
 	{
	 printf("Enter First Number:");
	 scanf("%d",&value1);
	 printf("Enter Second Number:");
	 scanf("%d",&value2);
	 storedvalue=mult(value1,value2);
	 printf("your Answer Is %d\n:",storedvalue);
 }
 else if(userinput==2)
 {
	 printf("Enter First Number:");
	 scanf("%d",&value1);
	 printf("Enter Second Number:");
	 scanf("%d",&value2);
	 storedvalue=divide(value1,value2);
	 printf("your Answer Is %d\n:",storedvalue);
 }
 else
 {
	 printf("Enter Valid choice");
}
}
int mult(int num1 , int num2)
{
	int result;
	result = num1*num2;
	return result;
}
int divide(int num1, int num2)
{
	int result;
	result =num1/num2;
	return result;
}
