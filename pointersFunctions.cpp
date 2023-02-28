#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int f(int *);
int g(int);
int main() {
	//fonksiyonlarda Pointer kullanýmý;Call by reference var
	int *p;
	int a=10;
	p=&a;
	printf("%d",*p); //pointer deðeri olan 10 basar
	*p=20; //a'nýn tuttuðu yeri referenc'ý deðiþtiriyoruz
	//a deðiþiyor ve
	printf("\n %d",a); // 20 basar

	int *q= (int *) malloc (sizeof(int)*a);//pointer ama dizi gibi kullandýk
	//20 elemanlý dizi alaný açýldý
	q[3]=70;
	q[19]=345;
	q[8]=23;
	printf("\n%d",q[3]);
	printf("\n%d",q[19]);
	printf("\n%d",q[8]);
	f(&a); //burdan 20 dönderiyoruz ama fonksyiondan 80 gleiyor
	printf("\n%d",a); //80 basar
	g(a);
	printf("\n%d",a); //deðiþmediðinden 80 basar

	getch();
	return 0;
}
int g(int a) { //call by value- buraya deðer gönderiyoruz ama bu deðer geri gelmiyor
	a=90;
}

int f(int *a) { //call by reference- referans geri döndürdüðünden deðer deðiþiyor
	*a=80;
}
