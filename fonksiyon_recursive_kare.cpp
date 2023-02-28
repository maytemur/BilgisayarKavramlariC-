#include <stdio.h>
#include <conio.h>
int kare_sayisi (int); 
int main(){ 
	int x;
	printf("kaçlık kare ızgaradaki kare sayısı? ");
	scanf("%d",&x);
	printf("%d",kare_sayisi(x));
	getch();
	
}
int kare_sayisi(int n){
	if(n==1)
	return 1;
	return kare_sayisi(n-1)*4+1;	
}
