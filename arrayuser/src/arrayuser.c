

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("Enter a Limit\n");
	int limit;
	scanf("%d",&limit);
	int array;
	int store[10];
	for(array=0;array<limit;array++){
		scanf("%d",&store[array]);
	}
	for(array=0;array<limit;array++){
			printf("This is the value that you have stored in array %d \n",store[array]);
		}
	return EXIT_SUCCESS;
}
