#include <stdio.h>
#include <conio.h>
int main(){
	double a,b;
	printf("Lutfen iki sayi giriniz");
	printf("\n");
	scanf("%d%d",&a,&b);
	if(a>b)
		printf("\nbuyuk sayi: %d",a);
	else if(a<b)
		printf("\nbuyuk sayi: %d",b);
	else
		printf("\nsayilar esit");
	getch();
}
