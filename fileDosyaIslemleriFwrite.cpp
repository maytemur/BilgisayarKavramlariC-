#include <stdio.h>

int main() {
	//size_t fwrite(void *ptr, size_t size, size_t n,FILE *stream);
	//belirtilen boyuttaki veriyi belirtilen bloða yazar
	//ptr = verinin içine okunacaðý bloðu iþaret eder-struct yapýsý
	//size= Her bloðun boyutunu iþaret eder
	//n = Kaç tane okuncaðýný belirtir
	//stream = dosya göstericisidir
	char a[11] = {'1','2','3','4','5','6','7','8','9','a','d'};
	FILE *fs; //fs pointer dosyasý
	fs= fopen("Project.txt","w");
	fwrite(a,1,11,fs); //her seferinde 1 karakter 10 kere fs dosyasýna yaz
	fclose(fs);
	return 0;
}
