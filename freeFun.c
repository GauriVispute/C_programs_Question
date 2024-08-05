#include<stdio.h>
#include<stdlib.h>
void main(){
	int  n;
	printf("Enter number : ");
	scanf("%d",&n);
	int *ptr;
	ptr=(int *) calloc(n,sizeof(int));
	
	for(int i=0;i<n;i++){
    	    printf("%d ",ptr[i]);
	}
	printf("\n");
	free(ptr);
	ptr=(int *) calloc(2,sizeof(int));
	for(int i=0;i<n;i++){
    	    printf("%d ",ptr[i]);
	} 
			
}