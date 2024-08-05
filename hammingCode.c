#include<stdio.h> 
int main(){
    int data[7],rec[7],i,c,c1,c2,c3;
    printf("this  works for  msg of 4 bits in size\nEnter msq bit by bit : ");
    scanf("%d %d %d %d",&data[0],&data[1],&data[2],&data[4]);
    data[6]=data[0]^data[2]^data[4];
    data[5]=data[0]^data[1]^data[4];
    data[3]=data[0]^data[1]^data[2];
    printf("Encoded data : ");
    for(int i=0;i<7;i++)
        printf("%d",data[i]);
    printf("\nEnter recevied data bit by bit : ");
    for(int i=0;i<7;i++)
        scanf("%d",&rec[i]);
    c1=rec[6]^rec[4]^rec[2]^rec[0];
    c2=rec[5]^rec[4]^rec[1]^rec[0];
    c3=rec[3]^rec[2]^rec[1]^rec[0];
    c=c3*4+c2*2+c1;
    if(c==0)
        printf("\nNo error in msg!");
    else{
        printf("\nError in msg at position : %d\ncorrect msg  : ",c);
        if(rec[7-c]==0)
            rec[7-c]=1;
        else
            rec[7-c]=0;
        for(int i=0;i<7;i++)
            printf("%d",rec[i]);
        }
    return 0;
}