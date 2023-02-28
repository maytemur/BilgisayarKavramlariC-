#include <stdio.h>
#include <conio.h>
int fibonacci (int); 
int main(){ 
	int x;
	printf("fibonacci serisinin kaçinci terimi? ");
	scanf("%d",&x);
	printf("%d",fibonacci(x));
	getch();
	
}
int fibonacci(int n){
	if(n==1|n==0)
	return 1;
	return fibonacci(n-1)+fibonacci(n-2);	
}
