#include <stdio.h>

int main(){
	float pi=3.14;
	int a;
	printf("%d\n",int(pi));	//pi yi tam sayıya çevirmezsek c hata veriyor
	printf("%f\n",pi);
	a=pi;
	printf("%d\n",a);
	a=2.15*3;
	pi=2.15*3;
	printf("%d %f",a,pi);
	
}
