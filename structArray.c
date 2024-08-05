//structure has array 
#include<stdio.h>
#include<string.h>
int main(){
	struct student {
	    char name[25];
	    int rollno;
	    float cgpa;
	};
	struct student ece[100];  //similar type of students 
	strcpy(ece[0].name,"Gauri");
	ece[0].rollno=90;
	ece[0].cgpa=9.9;
	printf("student name : %s\n",ece[0].name);
	printf("Rollno : %d\n",ece[0].rollno);
	printf("Cgpa : %f\n",ece[0].cgpa);
//initilized structure
	struct student s1={"Raj",45,9.8};
	printf("Student Name : %s\n",s1.name);
	printf("Rollno : %d\n",s1.rollno);
	printf("Cgpa : %f\n",s1.cgpa);
//pointer structure 
	struct student *ptr=&s1;
	printf("Student Name : %s\n",(*ptr).name);
	printf("Rollno : %d\n",ptr->rollno);
	printf("Cgpa : %f\n",ptr->cgpa);
	return 0;
}