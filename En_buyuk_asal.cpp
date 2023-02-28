#include <stdio.h>
#include <conio.h>
int main(){
	printf("bir sayý giriniz  ");
	int n;
	scanf("%d",&n);
	for(int i=n;i>=2;i--){
		int asalFlag=1; // Flag kontrolü
		for(int j=2;j<i;j++){
			if(i%j==0)
				asalFlag=0;
		}
		if(asalFlag==1){
			printf("%d",i);
			break;
		}
	}
	   
}
