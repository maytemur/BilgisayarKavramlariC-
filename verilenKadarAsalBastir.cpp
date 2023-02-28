#include <stdio.h>
#include <conio.h>
int main(){
	   int k;
	   printf("Kac tane asal sayi istiyorsunuz?  ");
	   scanf("%d",&k);
	   int sayac=0;
	   int n=2;
	   while(sayac<k){
	   	int asal=1;
	   	for(int i=2;i<n;i++){
	   		if(n%i==0)
	   		asal=0;
		   }
		   if(asal==1){
		   	printf("%d  ",n);
			   sayac++; 
		   }
		   n++;
	   } 
	  getch();		   
}
