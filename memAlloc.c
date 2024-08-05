#include<stdio.h>
#include<stdlib.h>
int main(){
    int n =2;
   printf("Enter size : ");
   scanf("%d",&n);
    int *ptr=(int *)malloc(n*sizeof(int ));
    //int *ptr=NULL;
   
    if(ptr==NULL){
        printf("Memory is not allowed");
        exit(1);
    }
  
    printf("\nEnter %d numbers : ",n);
    for(int i=0;i<n;i++){
        scanf("%d",ptr+i);
    }
 //more no.of memeory required
    int a ;
    printf("Enter more size : ");
    scanf("%d",&a);
    ptr=(int *)realloc(ptr,(n+a)*sizeof(int));
 
    if(ptr==NULL){
        printf("Memory is not allowed");
        exit(1);
    }
   
    printf("\nEnter %d more numbers : ",a);
     for(int i=n;i<n+a;i++){
        scanf("%d",(ptr+i));
    }
   
    printf("\n  %d numbers : ",n+a);
    for(int i=0;i<n+a;i++){
        printf("%d ",*(ptr+i));
    }
    return 0;
}