#include <stdio.h>
#include <conio.h>
int main() {
	int a=1,b;
	scanf("%d",&b);
	int flag=0;
	while(a<b-1) { //kendinden bir �nceki say�ya kadar
		a++;
		if(b%a==0) {	//tam b�ler mi?
			flag=1;
			break;
		}
	}
	if(flag==0) {
		printf("sayi asal");
	} else
		printf("sayi asal degil");
	getch();
}
