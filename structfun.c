//structure in function 
#include<stdio.h>
#include<string.h>
struct student {
	    char name[25];
	    int rollno;
	    float cgpa;
	};
void studentInfo (struct student s1);
int main(){
	struct student s1={"Gauri",28,9.5};
	studentInfo(s1);
	s1.rollno=95;
	printf("Rollno : %d",s1.rollno);
	return 0;
}
void studentInfo (struct student s1){
//call by value 
//use pointer for reference
	printf("Student name : %s\n",s1.name);
	printf("Rollno : %d\n",s1.rollno);
	printf("Cgpa : %f\n",s1.cgpa);
	s1.rollno=20;
}