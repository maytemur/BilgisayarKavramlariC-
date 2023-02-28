#include <stdio.h>
#include <conio.h>
int fibonacci (int); 
int main(){ 
	int x;
	printf("fibonacci serisinin kaçýncý terimi?");
	scanf("%d",&x);
	printf("%d",fibonacci(x));
	getch();
	
}
int fibonacci(int n){
	int a=1,b=1;
	int c;
	for(int i=3;i<=n;i++){
		c=a+b;
		a=b;
		b=c;		
	}
	return c;
}
