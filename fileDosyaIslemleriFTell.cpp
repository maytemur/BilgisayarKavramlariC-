#include <stdio.h>

int main() {
	//Dosyadaki Cursor'�n durumunu d�nd�r�r
	FILE *benimdosya2;
	benimdosya2= fopen("benimDosya2.txt","w");
	fprintf(benimdosya2,"Bilgisayar Kavramlar� Ftell �rne�i");
	printf("dosyadaki konum: %ld\n", ftell(benimdosya2));
	fclose(benimdosya2);
	return 0;
}
