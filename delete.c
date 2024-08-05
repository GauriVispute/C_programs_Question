#include<stdio.h>
void main(){
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("Enter %d numbers in array",n);
    
    int *arr;
    for(int i=0;i<n;i++){
        scanf("%d",arr+i);
    }
    for(int i=0;i<n;i++){
        printf("%d ",*(arr+i));
    }
    
    printf("\neliminate last number in array\n");
    int temp;
    for(int i=0;i<n;i++){
        if(i == (n-1)){
            temp=*(arr+i);
      //  (arr+i)--;
        n--;
        }
        else
        printf("%d ",*(arr+i));
    }
     printf("\n%d",n);
}