#include <stdio.h>
#include <conio.h>

int main() {
	char ch;
	FILE *fp;
	fp=fopen("out.txt","r");
	while(!feof(fp)) { //File End Of File - feof
		ch=getc(fp); //getc ve fprintf vs i�in manual page ler var help dosyas� olarak
		printf("\n%c",ch);
	}
	getch();
}
