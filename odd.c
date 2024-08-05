#include<stdio.h>
int main(){
	FILE *fptr;
	fptr=fopen("oddNumber.txt","w");
	int n;
	printf("Enter number : ");
	scanf("%d",&n);

	for(int i=1;i<=n;i++){
	    if(i%2 != 0){
		fprintf(fptr,"%d\n",i);
	    }
	}
	fclose(fptr);
}