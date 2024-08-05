#include<stdio.h>
void insert(int arr [],int item,int size,int ub,int j);//j is the no. present in array
int main(){
	int number[5]={1,2};
	int n=4;
	insert(number,n,5,1,2);
	 n=10;
	insert(number,n,5,2,3);
	 n=450;
	insert(number,n,5,3,4);
        n=6;
	insert(number,n,5,4,5);
        n=10;
	insert(number,n,5,5,6);
	
	return 0;
}
void insert (int arr[],int item,int size,int ub,int j){
	int maxlimit =5;
	if(ub==maxlimit){
	    printf("Overflow!");
	    return ;
	}
	arr[ub+1]=item;
	ub++;
	j++;
        for(int i=0;i<j;i++){ 
	   printf("%d ",arr[i]);
	}
	printf("\n");
}