#include <stdio.h>
#include <conio.h>
int main(){
	//göstericiler ram içinde bir bilgi ünitesinin bir baþka adresi 
	//göstermesinden oluþuyor
	//pointerlar C dilinin neden çok önemli olduðunu gösteren bir konu
	//baþka dillerde pointer kullanmak mümkün olmuyor bunun yerine alternatif 
	//Object referral var
	//int *p; pointerlar içinde deðer bulunmaz bellekde bir adres atamasý yapýyor
	//pointerlar (göstericiler) hafýzada bir adresin baþka bir adrese baðlanarak
	//kompleks yapýlarýn kullanýlmasýný saðlýyor
	// p=&a buradaki ampersantýn anlamý a'nýn adresini bul p'ye eþitle
	int a=10; // a deðiþkeni tanýmlama
	int *p; //bu p pointerý a'nýn adresini gösteriyor
	p=&a; //p pointer'ý a'nýn adresini tutuyor
	printf("%d\n",*p); //p'nin gösterdiði yeri basar
	printf("%d\n",p); //p'nin deðerini yani,p'nin gösterdiði yerin adresini basar
	printf("%d\n",a); //a'nýn deðerini basar
	printf("%d\n",&a); //a'nýn adresini basar
	printf("%d\n",&p); //p'nin adresini basar
	getch();
	return 0;
}  
