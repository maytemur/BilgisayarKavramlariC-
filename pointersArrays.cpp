#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main() {
	//her dizi bir pointer her pointer bir dizidir ama diziler haf�zada sabit yer
	//i�gal ederken pointer'lar�n haf�zadaki tuttu�u yer sonradan istenirse
	//de�i�tirilebilir ama dizide sat�r s�t�n say�s� ba�tan verildi�i i�in
	//sonradan de�i�tirilemez buna dynamic memory allocation denir
	//d[4] veya *(p1+4) ayn� �eydir burada p1 dizinin kendisinin adres alan�d�r
	int d[8]={5,63,8,2,3,6,5,8};
	int *p1;
	p1=&d[8]; //8 elemanl� d dizisinin adresi p1'e e�itleniyor
	   printf("%d",*(p1-7)); //d disinin 6'nci eleman�n� bast�racakt�r
	//ram de ne kadar yer ayr�laca��n� klavyeden okumak istedi�imizde
	//mesela girilecek ��renci say�s� belli de�il
	//bunun ��z�m� memory allocation komutu -> malloc bunun i�in stdlib.h
	//eklenmeli. Malloc void yani tipsiz d�nd�r�r bu y�zden type casting
	//yap�lmal�d�r
	int *p=(int*) malloc (sizeof(int)*10);//burada 10 elemanl� bir dizi yapm�� olduk
	//sizeof 10 tane integer'�n haf�zadki alan�n� verir- 64 bit ve 32 bitte farkl� de�er
	//p[3] 3nc� eleman� d�nd�r�r
	//int *p=(int*) malloc (sizeof(int)*a); dersek a'y� de�i�ken olarak alabiliriz

	getch();
	return 0;
}
