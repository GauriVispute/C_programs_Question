// Xor operator
#include<stdio.h>
int main(){
    int arr[5]={3,3,66,66,9};
    int uniqueNo=0;
    for(int i=0;i<5;i++){
        uniqueNo=uniqueNo^arr[i];
    }
    printf("Unique number : %d",uniqueNo);
    return 0 ;
}