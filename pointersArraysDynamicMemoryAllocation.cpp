#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main() {
	//Sabit tan�mlama
//	-int a[5]
//	-a[3];
//	-*(a+3)=8;
	//De�i�ken olarak tan�mlama
//	-int *a;
//	-a= (int *)malloc(sizeof(int)*5); 34 veya 64 bit
//sistemde farkl� oldu�undan malloc ile haf�zada yer
//ay�r�yoruz
//	-a[3]=8;
//	-*(a+3)=8;
	int a[5]= {1,2,3,45,6};
	for(int i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	int *b=(int *)malloc(sizeof(int)*5);//dizi say�s� 5 
	//yerine de�i�ken olarak al�nabilir
	b[3]=9;
	b[0]=2;
	*(b+1)=10;
	*(b+2)=11;
	b[4]=14;
	b[5]=33; //hata vermedi ama verebilirdi e�er oradaki 
	//haf�za dolu olsayd�
	for(int i=0;i<6;i++){
		printf("%d ",b[i]);
	}
}
