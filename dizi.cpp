#include <stdio.h>
#include <conio.h>

int main(){
	int v[] = {2,3,9,8,15,-6}; //bunu int a[6] �eklindede yazabiliriz ama eleman say�s�n�
	//bildirmesek de C 				bunu alg�l�yor
	//�ok boyutlu diziler
	//ilk verleni biz sat�r olarak kabul edicez
	int b[2][3]={{1,2,3},{4,5,6}}; // burda ilk sat�r elemanlar� 1,2 ve 3 d�r
	//dizide swapping i�lemi yani elemanlar�n�n yerini de�i�tirme
	int a[]= {3,8,7,2,6};
	for (int i=0;i<5;i++){
		printf("a[%d]=%d \n",i,a[i]);
	}
	printf("----------------------------\n");
	int gecici;
	for(int i=0;i<2;i++){
		gecici= a[i];
		a[i]=a[4-i];
		a[4-i]= gecici;
	}
	for(int i=0;i<5;i++){
		printf("a[%d]=%d \n",i,a[i]);
	}
	getch();
}
