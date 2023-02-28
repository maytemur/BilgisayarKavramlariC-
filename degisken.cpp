#include <stdio.h>
#include <conio.h>
int main(){
	int a=10;
	int b=3,c=4;
	int x;
	printf("n b t \\ \" \b\t\n a : %d, b : %d, c : %d", a,b,c); /*%d özel,sonraki karakterleri d ye atamaya yarýyor*/
	printf("\n lutfen bir sayi giriniz "); // \ sonrasý " veya yine ters slash o karakteri basar
	/*
	\n yeni satýr, \t sekme karakteri(tab),\b geri silme karakteri(son kulanýlan 
	karakteri siler,\\ ekrana ters bölme(\) karakteri basmak için,\* ekrana týrnak(") karakteri basmak için
	*/
	scanf("%d" ,&x);
	printf("\n girilen sayi : %d",x);
	float pis=3.14;
	printf("\n %10.4f",pis);
	int mus1=20;
}
