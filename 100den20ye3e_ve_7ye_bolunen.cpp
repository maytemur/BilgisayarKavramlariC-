#include <stdio.h>
#include <conio.h>

int main(){
	for(int i=100;i>20;i--){ // i 20 den başlayıp i++ ile 1 artırılarakda yapılabilir
		if(i%3==0&&i%7==0)
		printf(" %d",i);		
	}
	getch();
}
