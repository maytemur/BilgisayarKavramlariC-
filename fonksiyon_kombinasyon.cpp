#include <stdio.h>
#include <conio.h>
int fact(int); // fonksiyon prototipi- fact fonksiyonu int alýyor ve bir tane int döndürüyor burda
int comb(int,int); // aslýnda c de main,printf vs herþey bir fonksiyon 
int main(){ 
	printf("iki sayý giriniz:");
	int x,y;
	scanf("%d%d",&x,&y);
	printf("kombinasyonu : %d",comb(x,y));
	getch();
	
}
int comb(int x,int y){			//C(n,r)=n!/(r!(n-r)!) - kombinasyon fonksiyonu
	return fact(x)/(fact(y)*(fact(x-y)));
}
int fact(int x){
	int sonuc=1;
	for(int i=1;i<=x;i++){
		sonuc*=i;		
	}
	return sonuc;
}
