#include <stdio.h>
#include <conio.h>

int main(){
	printf("Hangi yilda oldugumuzu rakamla giriniz:  ");
	int buyil;
	scanf("%d",&buyil);
	printf("dogdugunuz yili rakamla giriniz: ");
	int dogumtarihi;
	scanf("%d",&dogumtarihi);
	printf("%d yasindasiniz.",buyil-dogumtarihi);
	getch();
}
