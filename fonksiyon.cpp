#include <stdio.h>
#include <conio.h>
int fact(int); // fonksiyon prototipi- fact fonksiyonu int al�yor ve bir tane int d�nd�r�yor burda
int main(){
	printf("bir say� giriniz:");
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
