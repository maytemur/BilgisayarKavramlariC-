#include <stdio.h>
#include <conio.h>
int fact(int); // fonksiyon prototipi- fact fonksiyonu int al�yor ve bir tane int d�nd�r�yor burda
int comb(int,int); // asl�nda c de main,printf vs her�ey bir fonksiyon 
int main(){ 
	printf("iki say� giriniz:");
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
