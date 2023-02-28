#include <stdio.h>
#include <conio.h>

int main() {
	int a = 10;
	int b = 3, c = 7;
	printf("%d", a + b);
	printf("\n%d", a << 2);	//<< shift operatötü binary çalýþýr 10=00001010 sola 2 kaydýr boþalan yere 0 koy 00101000=40 
	printf("\n%d", a >> 2);	//saða doðru 2 kaydýr 00001010----->00000010=2
	printf("\n%d", a+b*2);
	printf("\n%d", a%b);	//remainder , modul a/b den kalan 1
	printf("\n%d", a==b);	//a b'ye eþit olmadýðý için 0
	printf("\n%d", a>b);	//a b'den büyük olduðu için 1
	printf("\n%d", a++); //post increment
	printf("\n%d", ++a); //pre increment
	_getch();
	return 0;
}