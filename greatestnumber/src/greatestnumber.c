#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a ,b ;
	printf("Please Enter two Number's and check which is the greatest");
	printf("Please Enter Value for A");
	scanf("%d",&a);
	printf("Please Enter Value for B");
	scanf("%d",&b);
	if(a>b)
	{
	printf("A is greatest");
	}
	else
	{
	printf("B is greatest");
	}


	return EXIT_SUCCESS;
}
