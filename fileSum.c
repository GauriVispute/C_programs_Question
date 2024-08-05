//print sum 
#include<stdio.h>
int main(){
	FILE *fptr;
	//to read the data from other file we use fscanf
	//condition : but the file must exit and the have some data to read.
	fptr=fopen("sumf.txt","r");
	int a,b;
	fscanf(fptr,"%d",&a);
	fscanf(fptr,"%d",&b);
	fclose(fptr);
	//
	fptr=fopen("sumf.txt","w");
	fprintf(fptr,"%d",a+b);
	fclose(fptr);
	return 0;
}