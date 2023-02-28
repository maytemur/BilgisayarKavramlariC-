#include <stdio.h>
#include <conio.h>

int main() {
	char name[10];
	printf("What is your name?\n");
	scanf("%s",&name);
	printf("hello, %s\n", name);
	int n=0;
	while (n<1) {
		printf("Please give me a positive int: ");
		scanf("%i",&n);
		//	printf("",n);	
		}
	printf ("Thanks for the %i!\n",n);
	
	getch();
	}


