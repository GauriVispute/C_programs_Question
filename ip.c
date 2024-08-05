#include <stdio.h>
#include <stdlib.h>
int ipAddDivide[4]={0};
int divideArr(char str[]){
    int count=0,number=0;
    for(int i=0 ;str[i] != '\0';i++){
       if(str[i] == '.'){
           i++;
           ipAddDivide[count]=number;
           number=0;
           count++;
       }
       else{
             number = number*10+(int)str[i];
       } 
    }
	for (int i= 0;i<4;i++){
            printf("%d ",ipAddDivide[i]);
        }
   }
int main(){
    char ipAdd[16];
    printf("Enter Ip address : ");
    scanf("%s",ipAdd);
    divideArr(ipAdd);
    
    return 0;
}
