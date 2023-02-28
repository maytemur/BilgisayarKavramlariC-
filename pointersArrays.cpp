#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main() {
	//her dizi bir pointer her pointer bir dizidir ama diziler hafýzada sabit yer
	//iþgal ederken pointer'larýn hafýzadaki tuttuðu yer sonradan istenirse
	//deðiþtirilebilir ama dizide satýr sütün sayýsý baþtan verildiði için
	//sonradan deðiþtirilemez buna dynamic memory allocation denir
	//d[4] veya *(p1+4) ayný þeydir burada p1 dizinin kendisinin adres alanýdýr
	int d[8]={5,63,8,2,3,6,5,8};
	int *p1;
	p1=&d[8]; //8 elemanlý d dizisinin adresi p1'e eþitleniyor
	   printf("%d",*(p1-7)); //d disinin 6'nci elemanýný bastýracaktýr
	//ram de ne kadar yer ayrýlacaðýný klavyeden okumak istediðimizde
	//mesela girilecek öðrenci sayýsý belli deðil
	//bunun çözümü memory allocation komutu -> malloc bunun için stdlib.h
	//eklenmeli. Malloc void yani tipsiz döndürür bu yüzden type casting
	//yapýlmalýdýr
	int *p=(int*) malloc (sizeof(int)*10);//burada 10 elemanlý bir dizi yapmýþ olduk
	//sizeof 10 tane integer'ýn hafýzadki alanýný verir- 64 bit ve 32 bitte farklý deðer
	//p[3] 3ncü elemaný döndürür
	//int *p=(int*) malloc (sizeof(int)*a); dersek a'yý deðiþken olarak alabiliriz

	getch();
	return 0;
}
