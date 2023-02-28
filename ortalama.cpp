#include <stdio.h>
#include <conio.h>
int main(){
	int girilen=0;
	int n=0;
	int toplam=0;
	while(girilen!=-1){
		scanf("%d",&girilen);
		n++;
		toplam=toplam+girilen;		
	}
	n--;
	toplam++;
	printf(" kac sayi girildi : %d ,toplam : %d ,ortalama : %d",n,toplam,toplam/n);
	
	getch();
}
