#include<stdio.h>
void printStar(int *n);
int main(){
	int n=5;
	printStar(&n);
	return 0;
}
void printStar(int *n){
	for(int i=*n-1;i>=0;i--){
	    for(int j=0;j<=i;j++){
		printf("*");
	     }
	printf("\n");
	}

}