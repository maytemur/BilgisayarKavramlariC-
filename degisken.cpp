#include <stdio.h>
#include <conio.h>
int main(){
	int a=10;
	int b=3,c=4;
	int x;
	printf("n b t \\ \" \b\t\n a : %d, b : %d, c : %d", a,b,c); /*%d �zel,sonraki karakterleri d ye atamaya yar�yor*/
	printf("\n lutfen bir sayi giriniz "); // \ sonras� " veya yine ters slash o karakteri basar
	/*
	\n yeni sat�r, \t sekme karakteri(tab),\b geri silme karakteri(son kulan�lan 
	karakteri siler,\\ ekrana ters b�lme(\) karakteri basmak i�in,\* ekrana t�rnak(") karakteri basmak i�in
	*/
	scanf("%d" ,&x);
	printf("\n girilen sayi : %d",x);
	float pis=3.14;
	printf("\n %10.4f",pis);
	int mus1=20;
}
