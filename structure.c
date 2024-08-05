//structure
#include<stdio.h>
#include<string.h>
int main(){
	struct student{
	    char name[50];
	    int rollno;
	    float cgpa;
	};
	   struct student s1;
		s1.cgpa=9.7;
		s1.rollno=28;
		s1.name;
		strcpy(s1.name,"Gauri");
		printf("Student name : %s\n",s1.name);
		printf("rollno : %d\n",s1.rollno);
		printf("cgpa : %f\n",s1.cgpa);

		 struct student s2;
		s2.cgpa=9.5;
		s2.rollno=20;
		s2.name;
		strcpy(s2.name,"sakshi");
		printf("Student name : %s\n",s2.name);
		printf("rollno : %d\n",s2.rollno);
		printf("cgpa : %f\n",s2.cgpa);

		struct student s3;
		s3.cgpa=9.6;
		s3.rollno=10;
		s3.name;
		strcpy(s3.name,"Prerna");
		printf("Student name : %s\n",s3.name);
		printf("rollon : %d\n",s3.rollno);
		printf("cgpa : %f\n",s3.cgpa);

		return 0;
}