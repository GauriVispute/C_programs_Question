#include<stdio.h>
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void bubbleSort(int arr[],int *ptr){
    for(int i=0;i<*ptr;i++){
        for(int j=0;j<*ptr-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
void display(int arr[],int size){
    for(int i=0;i<size;i++)
        printf("%d ",arr[i]);
}
int main()
{//bubble sort.. 
    int number[]={90,56,98,1238,-1,-100,3};
    int n= sizeof(number)/sizeof(number[0]);
    display(number,n);
    printf("\n");
    bubbleSort(number,&n);
    display(number, n);
    return 0;
}