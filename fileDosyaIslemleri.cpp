#include <stdio.h>

int main() {
	FILE *outfile, *infile; //2 tane pointerla dosya a��yoruz
	int b=5,f ;
	float a= 13.72, c=6.68,e,g;
	outfile= fopen ("testdata","w"); //testdata adl� dosyay� W wirte modunda a��yoruz
	fprintf(outfile, " %f %d %f ", a,b,c);
	fclose(outfile);
	infile= fopen("testdata", "r"); //read modunda a��yoruz
	fscanf (infile,"%f %d %f", &e,&f,&g);
	printf (" %f %d %f \n ",a,b,c);
	printf (" %f %d %f \n ", e,f,g);	
}
