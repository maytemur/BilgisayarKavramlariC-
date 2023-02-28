#include <stdio.h>
#include <conio.h>
int fact(int); // fonksiyon prototipi- fact fonksiyonu int alýyor ve bir tane int döndürüyor burda
int main(){
	printf("bir sayý giriniz:");
	int x;
	scanf("%d",&x);
	printf("faktoriyeli : %d",fact(x));
	getch();
	
}
int fact(int x){
	int sonuc=1;
	for(int i=1;i<=x;i++){
		sonuc*=i;		
	}
	return sonuc;
}
