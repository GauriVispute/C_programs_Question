//find max min number in an  array
void findMaxMin(int arr[] ,int n,int *max ,int *min);
#include<stdio.h>
int main(){
    int size;
    printf("Enter size of array : ");
    scanf("%d",&size);
    
    int number[size];
    int max=-1,min=100000;
    
    for(int i = 0 ; i<size ; i++){
        scanf("%d",&number[i]);
    }
    
    findMaxMin(number,size,&max,&min);
    
    printf("max = %d ",max);
    printf("min = %d ",min);
    return  0 ;
}
void findMaxMin(int arr[] ,int n, int *max ,int *min){
    for(int i = 0 ; i<n ;i++){
        if(arr[i] > *max) // greater
            *max=arr[i];
            
        if(arr[i] < *min) //smaller
            *min=arr[i];
    }
}