#include <stdio.h>
#include <stdlib.h>
int main() {
	//Stringler karakter dizisidir
	//String ile karakter dizisi arasýndaki tek fark end of
	//string tir
	char isim[20];//20 karakter yer ayýrdýk
	//scanf de stringler %s ,integerlar %d ve karakterler
	//%c ile çalýþýyor
	char *soyisim;
	soyisim= (char *) malloc(sizeof(char)*20);
	scanf("%s",isim); //diziye okuyor
	scanf("%s", soyisim); //pointer a okuyor
	printf(" tanistigimiza memnun oldum %s %s ",isim, soyisim);
	//20 karakterden fazla olursa o kýsýmdaki hafýzanýn 
	//durumuna baðlý, dolu ise hata verir
	printf("ucuncu karakterler %c %c",isim[3],soyisim[3]);
	
}
