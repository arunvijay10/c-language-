

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a ,b,c ,d ;
	a= 45;
	b = a++;
	c= 45;
	d= ++c;
	printf("this is the value of a  %d ",a);
	printf("\nthis is the value of b %d",b);
	printf("\nthis is the value of c  %d ",c);
	printf("\nthis is the value of d %d",d);
}
