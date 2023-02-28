#include <stdio.h>
#include <conio.h>
int main(){
	int girilen;
	int eb=0;
	printf("\nlutfen 5 sayi giriniz");
	printf("\n");
	for(int i=0;i<5;i++ ){
		scanf("\n%d",&girilen);
			printf("\nsimdiye kadarki en buyuk sayi : %d",eb);
			printf("\n");
		if(girilen>eb)
			eb=girilen;	
	}
	printf("\nEn Buyuk Sayi:%d",eb);
	
	getch();
}  
