#include<stdio.h>
void main()
{
	int n=5;
		for (int i=0;i<n;i++){
	    for(int j=0;j<=i;j++){
		printf("%d",j+1);
	    }
	    printf("\n");
	}
	
	for (int i=n-1;i>=0;i--){
	    for(int j=0;j<i;j++){
		printf("%d",j+1);
	    }
	    printf("\n");
	}
}