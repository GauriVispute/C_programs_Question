//malloc function 
#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr;
	ptr=(int *)malloc(5 * sizeof(int));
	ptr[0]=1;
	ptr[1]=2;
	ptr[2]=3;
	ptr[3]=4;
	ptr[4]=5;
	for(int i=0;i<5;i++)
	   printf("%d ",ptr[i]);
	printf("\n");
	float *ptrf;
	ptrf=(float *)malloc(5 * sizeof(float));
	ptrf[0]=1;
	ptrf[1]=2;
	ptrf[2]=3;
	ptrf[3]=4;
	ptrf[4]=5;
	for(int i=0;i<5;i++)
	   printf("%f ",ptrf[i]);
	return 0 ;
}