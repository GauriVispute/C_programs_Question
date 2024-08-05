//student info
#include<stdio.h>
int main(){
	FILE *fptr;
	fptr=fopen("studentInfo.txt","w");
	int age, rollno;
	char studentName[50];
	float cgpa;
	printf("Enter your rollno : ");
	scanf("%d",&rollno);
	printf("Enter your name : ");
	scanf("%s",studentName);
	printf("Enter your age : ");
	scanf("%d",&age);
	printf("Enter your cgpa : ");
	scanf("%f",&cgpa);
	fprintf(fptr,"%d\t",rollno);
	fprintf(fptr,"%s\t",studentName);
	fprintf(fptr,"%d\t",age);	
	fprintf(fptr,"%f\t",cgpa);
	fclose(fptr);
	return 0 ;
}