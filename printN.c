// print 5 numbers
#include<stdio.h>
int main(){
	int n;
	FILE *fptr;
	fptr=fopen("banker.txt","r");
	fscanf(fptr,"%d",&n);
	printf("number = %d\n",n);
	fscanf(fptr,"%d",&n);
	printf("number = %d\n",n);
	fscanf(fptr,"%d",&n);
	printf("number = %d\n",n);
	fscanf(fptr,"%d",&n);
	printf("number = %d\n",n);
	fscanf(fptr,"%d",&n);
	printf("number = %d\n",n);
	fclose(fptr);
	return 0;
}