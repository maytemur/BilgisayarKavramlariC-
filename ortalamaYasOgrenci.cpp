#include <stdio.h>
#include <conio.h>
int main(){
	int yas=0;
	int toplam =0;
	int say=0;
	while (yas>=0){
		toplam= toplam+yas;
		say++;
		printf("siradaki ograncinin yasini giriniz  ");
		scanf("%d",&yas);		  
	}
	say--;
	printf("\nortalama yas : %f",(float)toplam/(float) say); //int tamsayý vereceginden 
	//kesirli sonuc için float casting yapýldý
	getch();
}
