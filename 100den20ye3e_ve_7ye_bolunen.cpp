#include <stdio.h>
#include <conio.h>

int main(){
	for(int i=100;i>20;i--){ // i 20 den ba�lay�p i++ ile 1 art�r�larakda yap�labilir
		if(i%3==0&&i%7==0)
		printf(" %d",i);		
	}
	getch();
}
