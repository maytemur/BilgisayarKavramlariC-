#include <stdio.h>
#include <stdlib.h>
int main() {
	//Stringler karakter dizisidir
	//String ile karakter dizisi aras�ndaki tek fark end of
	//string tir
	char isim[20];//20 karakter yer ay�rd�k
	//scanf de stringler %s ,integerlar %d ve karakterler
	//%c ile �al���yor
	char *soyisim;
	soyisim= (char *) malloc(sizeof(char)*20);
	scanf("%s",isim); //diziye okuyor
	scanf("%s", soyisim); //pointer a okuyor
	printf(" tanistigimiza memnun oldum %s %s ",isim, soyisim);
	//20 karakterden fazla olursa o k�s�mdaki haf�zan�n 
	//durumuna ba�l�, dolu ise hata verir
	printf("ucuncu karakterler %c %c",isim[3],soyisim[3]);
	
}
