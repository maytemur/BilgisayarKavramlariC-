#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int f(int *);
int g(int);
int main() {
	//fonksiyonlarda Pointer kullan�m�;Call by reference var
	int *p;
	int a=10;
	p=&a;
	printf("%d",*p); //pointer de�eri olan 10 basar
	*p=20; //a'n�n tuttu�u yeri referenc'� de�i�tiriyoruz
	//a de�i�iyor ve
	printf("\n %d",a); // 20 basar

	int *q= (int *) malloc (sizeof(int)*a);//pointer ama dizi gibi kulland�k
	//20 elemanl� dizi alan� a��ld�
	q[3]=70;
	q[19]=345;
	q[8]=23;
	printf("\n%d",q[3]);
	printf("\n%d",q[19]);
	printf("\n%d",q[8]);
	f(&a); //burdan 20 d�nderiyoruz ama fonksyiondan 80 gleiyor
	printf("\n%d",a); //80 basar
	g(a);
	printf("\n%d",a); //de�i�medi�inden 80 basar

	getch();
	return 0;
}
int g(int a) { //call by value- buraya de�er g�nderiyoruz ama bu de�er geri gelmiyor
	a=90;
}

int f(int *a) { //call by reference- referans geri d�nd�rd���nden de�er de�i�iyor
	*a=80;
}
