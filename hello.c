#include<stdio.h>
#include<string.h>
void chPresent(char str[],char ch);
int main(){
	char str1[]="HelloWorld";
	char character;
	printf("Enter the character : ");
	scanf("%c",&character);
	chPresent(str1,character);
	return 0;
}
void chPresent(char str[],char ch){
	int count =0;
	for(int i=0;str[i] != '\0' ; i++){
	    if(str[i]==ch){
	        printf("Character is present");
                 return ;    
            }
	}
	    printf("Character is absent");

}