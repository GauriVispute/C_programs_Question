#include <stdio.h>
#include<string.h>
int main(){
    int count=0;
    char databit[80];
    printf("Enter Data Bit  : ");
    scanf("%s",databit);
    printf("Databits before bit stuffing  : %s\n",databit);
    printf("Databits After  bit stuffing  : ");
    for(int i=0 ; i<strlen(databit);i++){
        if(databit[i] == '1')
            count++;
        else
            count = 0;
        printf("%c",databit[i]);
        if(count == 5){
            printf("0");
            count =0 ;
        }
    }
    return 0;
}
