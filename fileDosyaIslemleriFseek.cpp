#include <stdio.h>

int main() {
	//dosya göstericisini istenen noktaya taþýr
	//dosya içinde arama yapmak için
	//SEEK_SET dosyanýn baþýndan
	//SEEK_CUR cursor'ýn olduðu yerden
	//SEEK_END dosyanýn sonundan
	FILE *benimdosya;
	benimdosya= fopen("benimDosya.txt","w");
	fputs("Bilgisayar Kavramlarý Fseek örneði",benimdosya);
	fseek(benimdosya,5,SEEK_SET); //5 karakter dosyanýn baþýndan gidecek
	fputs(" Sadi",benimdosya);
	fclose(benimdosya);
	return 0;
}
