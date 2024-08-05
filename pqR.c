// pq for to read no.
#include<stdio.h>
int main(){
	FILE *fptr;
	fptr=fopen("Banker.txt","r");
	int  n;
	fscanf(fptr,"%d",&n);
	printf("%d\n",n);
	fscanf(fptr,"%d",&n);
	printf("%d\n",n);
	fscanf(fptr,"%d",&n);
	printf("%d\n",n);
	fscanf(fptr,"%d",&n);
	printf("%d\n",n);
	fscanf(fptr,"%d",&n);
	printf("%d\n",n);
	fclose(fptr);
}