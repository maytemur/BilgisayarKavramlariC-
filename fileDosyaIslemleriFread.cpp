#include <stdio.h>

int main() {
	//size_t fread(void *ptr, size_t size, size_t n,FILE *stream);
	//belirtilen boyuttaki veriyi belirtilen blo�a okur
	//ptr = verinin i�ine okunaca�� blo�u i�aret eder-struct yap�s�
	//size= Her blo�un boyutunu i�aret eder
	//n = Ka� tane okunca��n� belirtir
	//stream = dosya g�stericisidir
	FILE *f;
	char buffer[16]; //buffer 16 karakter tutmak i�in
	if(f=fopen("out.txt","r")) {
		fread(buffer,1,15,f); //buffer i�ine 1 karakter 15kere oku
		//bu kullan�lan bir yap�
		//ram e yap�lacak i� i�in double buffer la vs y�kleniyor
		buffer[15]=0;
		printf("dosyan�n ilk 15 karakteri: \n%s\n",buffer);

	}else {
		printf("dosya a��lamad� bir hata olu�tu");
	}
	return 0;
}
