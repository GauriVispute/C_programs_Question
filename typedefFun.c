//using typedef keyword
#include<stdio.h>
#include<string.h>
typedef struct computerEngineeringStudent{
	char name[25];
	int rollno;
	float cgpa;
} coe ;//coe is alise(nickname)
void studInfo(coe s2);
int main(){
	struct computerEngineeringStudent s1;
	coe s2={"trinay",56,9.6};
	//studInfo(coe s2);
	printf("Student Name : %s\n",s2.name);
	printf("Rollno : %d\n",s2.rollno);
	printf("cgpa : %f\nf",s2.cgpa);
	return 0;
}
void studInfo(coe s2){
	printf("Student Name : %s\n",s2.name);
	printf("Rollno : %d\n",s2.rollno);
	printf("cgpa : %f\n",s2.cgpa);
}