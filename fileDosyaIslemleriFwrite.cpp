#include <stdio.h>

int main() {
	//size_t fwrite(void *ptr, size_t size, size_t n,FILE *stream);
	//belirtilen boyuttaki veriyi belirtilen blo�a yazar
	//ptr = verinin i�ine okunaca�� blo�u i�aret eder-struct yap�s�
	//size= Her blo�un boyutunu i�aret eder
	//n = Ka� tane okunca��n� belirtir
	//stream = dosya g�stericisidir
	char a[11] = {'1','2','3','4','5','6','7','8','9','a','d'};
	FILE *fs; //fs pointer dosyas�
	fs= fopen("Project.txt","w");
	fwrite(a,1,11,fs); //her seferinde 1 karakter 10 kere fs dosyas�na yaz
	fclose(fs);
	return 0;
}
