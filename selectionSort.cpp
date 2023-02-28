#include <stdio.h>
#include <conio.h>

int main(){
	int n=9;
	int A[]={5,3,34,6,7,1,4,8,2};
	int tmp;
	int min;
	for (int i=0;i<n;i++){
		min=i;
		for(int j=i;j<n;j++){
			if (A[j] < A[min]){
				min=j;
			}			
		}
		tmp=A[i];
		A[i]=A[min];
		A[min]=tmp;
		printf("%d,",A[i]);
	}
}
