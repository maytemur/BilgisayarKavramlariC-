#include <stdio.h>

int main() {
	//Dosyadaki Cursor'ýn durumunu döndürür
	FILE *benimdosya2;
	benimdosya2= fopen("benimDosya2.txt","w");
	fprintf(benimdosya2,"Bilgisayar Kavramlarý Ftell örneði");
	printf("dosyadaki konum: %ld\n", ftell(benimdosya2));
	fclose(benimdosya2);
	return 0;
}
