#include <stdio.h>
int invertBit(int invert){
    invert = !invert;
    return invert;
}
void display(int arr[],int size){
    for (int i=0;i<size;i+=1){
        printf("%d",arr[i]);
    }
}
void errorResult(int p,int arr[],int size){
    if(p==0){
        printf("\nMsg is Error free!");
    }
    else{
        int change ;
         printf("\nError is  in %d bit",p);
        for(int i=0;i<size;i++)
        {
            if(arr[p]==0 || arr[p]==1){
                change=arr[p];
                arr[p]=invertBit(change);
            }
        }
    }
    printf("\nCorrect codeword : ");
    display(arr,size);
}
int main(){
    int dataWord[7],arrsize=sizeof(dataWord)/sizeof(dataWord[0]);
    printf("Enter Data Word : ");
    scanf("%d",&dataWord[2]);
    scanf("%d",&dataWord[4]);
    scanf("%d",&dataWord[5]);
    scanf("%d",&dataWord[6]);
    
    dataWord[0] = dataWord[2]^dataWord[4]^dataWord[6];
    dataWord[1] = dataWord[2]^dataWord[5]^dataWord[6];
    dataWord[3] = dataWord[4]^dataWord[5]^dataWord[6];
    
    printf("Codeword : ");
    display(dataWord,arrsize);
    
    int bit;
    printf("\nEnter index of bit to invert(0-6) : ");
    scanf("%d",&bit);
    //invert the bit to for error 
    int bitAns = dataWord[bit]&1;  
    dataWord[bit]=invertBit(bitAns);
    
    printf("Codeword at receiver end : ");
    display(dataWord,arrsize);
    
    int p1 = dataWord[0]^dataWord[2]^dataWord[4]^dataWord[6];
    int p2 = dataWord[1]^dataWord[2]^dataWord[5]^dataWord[6];
    int p4 = dataWord[3]^dataWord[4]^dataWord[5]^dataWord[6];
    int p  = 4*p4+2*p2+p1;
    p-=1; //range of p has to reduced by 1 becoz of arr[0-6]
    
    errorResult(p,dataWord,arrsize);
    return 0;
}