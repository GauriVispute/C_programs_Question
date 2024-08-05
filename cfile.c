//file open close ......
#include<stdio.h>
int main(){
	FILE *fptr;
	fptr=fopen("banker.txt","r");
			//in read only uses fgetc
		//printf("%c\n",fgetc(fptr));
		//printf("%c\n",fgetc(fptr));
		//printf("%c\n",fgetc(fptr));
		//printf("%c\n",fgetc(fptr));
		//printf("%c\n",fgetc(fptr));
		char ch ;
 		ch=fgetc(fptr);
		while(ch != EOF){
		    printf("%c",ch);
		    ch=fgetc(fptr);
		}
		fclose(fptr);
	return 0;
}