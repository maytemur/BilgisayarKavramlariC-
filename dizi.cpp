#include <stdio.h>
#include <conio.h>

int main(){
	int v[] = {2,3,9,8,15,-6}; //bunu int a[6] þeklindede yazabiliriz ama eleman sayýsýný
	//bildirmesek de C 				bunu algýlýyor
	//çok boyutlu diziler
	//ilk verleni biz satýr olarak kabul edicez
	int b[2][3]={{1,2,3},{4,5,6}}; // burda ilk satýr elemanlarý 1,2 ve 3 dür
	//dizide swapping iþlemi yani elemanlarýnýn yerini deðiþtirme
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
