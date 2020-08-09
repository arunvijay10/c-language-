#include<stdio.h>
#include<stdlib.h>
int main()
{
int i;
char name[10];
printf("Enter Your Name");
for(i=0;i<11;i++){
scanf("%c",&name[i]);
}
printf("this is  your name %c\n",name[i]);

for(i=0;i<10;i++){
printf("\n%c",name[i]);
}

}
