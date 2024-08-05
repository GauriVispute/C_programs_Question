#include<stdio.h>
void selectionSort(int arr[] ,int n){
    
    for (int i =0;i<n-1;i++){
        int min = i;
        for (int j=i+1;j<n ;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
       int temp = arr[min];
       arr[min] = arr[i];
       arr[i]=temp;
    }
}
void display(int arr[],int n){ 
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main()
{
    // selection sort....
      int number [] = {5,4,3,2,1};
      int size = sizeof(number)/sizeof(number[0]);
      display(number,size);
      selectionSort(number,size);
      printf("\nSorted Elements : ");
      display(number,size);
    return 0;
}