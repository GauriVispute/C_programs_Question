#include<stdio.h>
void slice(char arr[],int n,int m);
int main(){
	char str[50]="HelloWorld";
	slice(str,3,6);
	return 0;
}
void slice(char arr[],int n ,int m){
	char newStr[100];
	int j=0;
	for(int i=n;i<=m;i++,j++){
	   // for(j=0;newStr[j] != '\0';j++)
	        newStr[j]=arr[i];
	}
	     newStr[j]='\0';
	puts(newStr);
}