#include <stdio.h>
#include <stdlib.h>
typedef enum{
	bay, // 0 demek 
	bayan // 1 enumurator sýralý olarak 0 dan baþlayarak
} cinsiyet; //gidiyor 0,1,2,3,4...
typedef struct { //typedef mevcut tiplerin dýþýnda 
//bir tip tanýmlamaya yarýyor
	int yas;
	char * isim; //karakter pointer
	cinsiyet c;
} insan;
int emeklimi(insan *birey){
	//printf("\n %d %u ", birey->yas,birey->c ); debug için yazdýk
	//fflush(stdout);  debug için printf hata verirse
	//perror("gecti");
	if(birey->c==bay && birey->yas>55)
	return 1;
	if(birey->c==bayan && birey->yas>50)
		return 1;
	return 0;
}
int main() {
//Structlar C dilinin temelini oluþturur. Birden fazla tipi
//birleþtirerek tek bir tip oluþturmak istersek o zaman
//struct kullanýyoruz. Mesela çalýþanýmýz var. Bu çalýþanýn
//tc kimlik no su ,boyu yaþý vs vs vs bir sürü  bilgi var bu
//bilgilerin hepsini birleþtirip tek bir bilgi halinde 
//tutmak istiyorsak Struct tipini kullanabiliyoruz. Struct 
//la yeni bir tip tanýmlýyoruz ve tanýmladýðýmýz bu tipin 
//bütün alt özelliklerini bir araya getirerek yeni bir tip 
//haline getiriyoruz.
	int a;
	insan ali; //object oriented dillerde object diyicez 
	//class dan türemiþ olarak ama C de struct(oluþum) 
	//diyoruz
	insan *veli;
	veli= (insan*) malloc(sizeof(insan));//insan için gerekli
	//bütün alan hafýzada ayrýlýyor
	veli -> yas=60; //struct pointer ise ok ile   
	veli -> c= bay;
	ali.yas = 30;
	ali.c = bay;
	printf("alinin yasi : %d", ali.yas);
	printf("\nalinin cinsiyeti : %u", ali.c);
	printf("\nvelinin yasi : %d", veli->yas);
	printf("\nali emekli mi %d", emeklimi(&ali)); //baþýna
	//ali pointer olmadýðý için ampersant koyduk & 
	//hata vermemesi için
	printf("\nveli emekli mi %d", emeklimi(veli));  
}
