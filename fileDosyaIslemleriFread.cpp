#include <stdio.h>

int main() {
	//size_t fread(void *ptr, size_t size, size_t n,FILE *stream);
	//belirtilen boyuttaki veriyi belirtilen bloða okur
	//ptr = verinin içine okunacaðý bloðu iþaret eder-struct yapýsý
	//size= Her bloðun boyutunu iþaret eder
	//n = Kaç tane okuncaðýný belirtir
	//stream = dosya göstericisidir
	FILE *f;
	char buffer[16]; //buffer 16 karakter tutmak için
	if(f=fopen("out.txt","r")) {
		fread(buffer,1,15,f); //buffer içine 1 karakter 15kere oku
		//bu kullanýlan bir yapý
		//ram e yapýlacak iþ için double buffer la vs yükleniyor
		buffer[15]=0;
		printf("dosyanýn ilk 15 karakteri: \n%s\n",buffer);

	}else {
		printf("dosya açýlamadý bir hata oluþtu");
	}
	return 0;
}
