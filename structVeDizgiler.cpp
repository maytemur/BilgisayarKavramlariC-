#include <stdio.h>
#include <stdlib.h>
typedef enum{
	bay, // 0 demek 
	bayan // 1 enumurator s�ral� olarak 0 dan ba�layarak
} cinsiyet; //gidiyor 0,1,2,3,4...
typedef struct { //typedef mevcut tiplerin d���nda 
//bir tip tan�mlamaya yar�yor
	int yas;
	char * isim; //karakter pointer
	cinsiyet c;
} insan;
int emeklimi(insan *birey){
	//printf("\n %d %u ", birey->yas,birey->c ); debug i�in yazd�k
	//fflush(stdout);  debug i�in printf hata verirse
	//perror("gecti");
	if(birey->c==bay && birey->yas>55)
	return 1;
	if(birey->c==bayan && birey->yas>50)
		return 1;
	return 0;
}
int main() {
//Structlar C dilinin temelini olu�turur. Birden fazla tipi
//birle�tirerek tek bir tip olu�turmak istersek o zaman
//struct kullan�yoruz. Mesela �al��an�m�z var. Bu �al��an�n
//tc kimlik no su ,boyu ya�� vs vs vs bir s�r�  bilgi var bu
//bilgilerin hepsini birle�tirip tek bir bilgi halinde 
//tutmak istiyorsak Struct tipini kullanabiliyoruz. Struct 
//la yeni bir tip tan�ml�yoruz ve tan�mlad���m�z bu tipin 
//b�t�n alt �zelliklerini bir araya getirerek yeni bir tip 
//haline getiriyoruz.
	int a;
	insan ali; //object oriented dillerde object diyicez 
	//class dan t�remi� olarak ama C de struct(olu�um) 
	//diyoruz
	insan *veli;
	veli= (insan*) malloc(sizeof(insan));//insan i�in gerekli
	//b�t�n alan haf�zada ayr�l�yor
	veli -> yas=60; //struct pointer ise ok ile   
	veli -> c= bay;
	ali.yas = 30;
	ali.c = bay;
	printf("alinin yasi : %d", ali.yas);
	printf("\nalinin cinsiyeti : %u", ali.c);
	printf("\nvelinin yasi : %d", veli->yas);
	printf("\nali emekli mi %d", emeklimi(&ali)); //ba��na
	//ali pointer olmad��� i�in ampersant koyduk & 
	//hata vermemesi i�in
	printf("\nveli emekli mi %d", emeklimi(veli));  
}
