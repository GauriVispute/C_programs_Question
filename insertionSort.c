#include<stdio.h>
void insertionSort(int arr[],int size){
    for(int i=1;i<size;i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j-=1;
        }
        arr[j+1]=temp;
    }
}
void printArray(int arr[],int n){
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int number[] ={15,2,6,3,1};
    int n = sizeof(number)/sizeof(number[0]);
   printArray(number , n);
    printf("\nSorted array : ");
    insertionSort(number , n);
   printArray(number , n);
    return 0;
}