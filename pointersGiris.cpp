#include <stdio.h>
#include <conio.h>
int main(){
	//g�stericiler ram i�inde bir bilgi �nitesinin bir ba�ka adresi 
	//g�stermesinden olu�uyor
	//pointerlar C dilinin neden �ok �nemli oldu�unu g�steren bir konu
	//ba�ka dillerde pointer kullanmak m�mk�n olmuyor bunun yerine alternatif 
	//Object referral var
	//int *p; pointerlar i�inde de�er bulunmaz bellekde bir adres atamas� yap�yor
	//pointerlar (g�stericiler) haf�zada bir adresin ba�ka bir adrese ba�lanarak
	//kompleks yap�lar�n kullan�lmas�n� sa�l�yor
	// p=&a buradaki ampersant�n anlam� a'n�n adresini bul p'ye e�itle
	int a=10; // a de�i�keni tan�mlama
	int *p; //bu p pointer� a'n�n adresini g�steriyor
	p=&a; //p pointer'� a'n�n adresini tutuyor
	printf("%d\n",*p); //p'nin g�sterdi�i yeri basar
	printf("%d\n",p); //p'nin de�erini yani,p'nin g�sterdi�i yerin adresini basar
	printf("%d\n",a); //a'n�n de�erini basar
	printf("%d\n",&a); //a'n�n adresini basar
	printf("%d\n",&p); //p'nin adresini basar
	getch();
	return 0;
}  
