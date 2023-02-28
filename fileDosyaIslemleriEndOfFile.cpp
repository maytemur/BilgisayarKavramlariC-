#include <stdio.h>
#include <conio.h>

int main() {
	char ch;
	FILE *fp;
	fp=fopen("out.txt","r");
	while(!feof(fp)) { //File End Of File - feof
		ch=getc(fp); //getc ve fprintf vs için manual page ler var help dosyasý olarak
		printf("\n%c",ch);
	}
	getch();
}
