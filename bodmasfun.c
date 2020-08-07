#include<stdio.h>
#include<stdlib.h>
void add();
void sub();
void mul();
void divi();
int main()
{
	printf("What do you Want ?\n");
	printf(" For Add Press 1\n For Sub Press 2\n For mul Press 3\n For Div Press 4\n");
	int userinput;
	scanf("%d",&userinput);
	if(userinput==1)
 	{	
		add();
	}
	else if(userinput==2)
	{
		sub();
	}
	else if(userinput==3)
	{
		mul();
	}
	else if(userinput==4)
	{
		divi();
	}
	else
	{
		printf("Invalid Input");
	}
}
void add()
{
	int add1,add2,together;
	printf("Enter Two Number\n");
	printf("Enter First Number:\n");
	scanf("%d",&add1);
	printf("Enter Second Number:\n");
	scanf("%d",&add2);
	together=add1+add2;
	printf("The Sum of Two Number is :%d",together);
}
void sub()
{
	int sub1,sub2,together;
	printf("Enter Two Number\n");
	printf("Enter First Number:\n");
	scanf("%d",&sub1);
	printf("Enter Second Number:\n");
	scanf("%d",&sub2);
	together=sub1-sub2;
	printf("The Sub of Two Number is :%d",together);
}
void mul()
{
	int mul1,mul2,together;
	printf("Enter Two Number\n");
	printf("Enter First Number:\n");
	scanf("%d",&mul1);
	printf("Enter Second Number:\n");
	scanf("%d",&mul2);
	together=mul1*mul2;
	printf("The Mul of Two Number is :%d",together);
}
void divi()
{
	int div1,div2,together;
	printf("Enter Two Number\n");
	printf("Enter First Number:\n");
	scanf("%d",&div1);
	printf("Enter Second Number:\n");
	scanf("%d",&div2);
	together=div1/div2;
	printf("The Div of Two Number is :%d",together);
}
