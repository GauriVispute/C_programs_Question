#include<stdio.h>
#include<stdlib.h>
void main(){
	int  n;
	printf("Enter number : ");
	scanf("%d",&n);
	int *ptr;
	ptr=(int *) calloc(n,sizeof(int));
	for(int i=0;i<n;i++)
	   scanf("%d",&ptr[i]);
	for(int i=0;i<n;i++){
    	    printf("%d ",ptr[i]);
	}
			
}