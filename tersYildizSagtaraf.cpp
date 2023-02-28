#include <stdio.h>
#include <conio.h>
int main(){
	int n,i;
	for (n=4;n>=0;n--){	//4-n tane yýldýz
		for(i=0;i<4-n;i++){
			printf(" ");
		}
		for(i=0;i<=n;i++){
			printf("*");
		}
		printf("\n");
	}
	getch();
}
