#include <stdio.h>

int main() {
	//dosya g�stericisini istenen noktaya ta��r
	//dosya i�inde arama yapmak i�in
	//SEEK_SET dosyan�n ba��ndan
	//SEEK_CUR cursor'�n oldu�u yerden
	//SEEK_END dosyan�n sonundan
	FILE *benimdosya;
	benimdosya= fopen("benimDosya.txt","w");
	fputs("Bilgisayar Kavramlar� Fseek �rne�i",benimdosya);
	fseek(benimdosya,5,SEEK_SET); //5 karakter dosyan�n ba��ndan gidecek
	fputs(" Sadi",benimdosya);
	fclose(benimdosya);
	return 0;
}
