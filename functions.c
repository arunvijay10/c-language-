#include<stdio.h>
#include<stdlib.h>
void create(int ,int );
int main()
{
int value1 ;
int value2 ;
printf("Enter Two Value's"); 
scanf("%d %d", &value1, &value2);
create(value1,value2);
}
void create(int fun1, int fun2)
{
int total;
total = fun1+fun2;
printf("This is the total of a Two Value %d",total);
}
