//complex number to print by pointer
#include<stdio.h>
struct complex {
	int real;
	int imaginary;
};
int main(){
	struct complex number1={2,3};
	struct complex *ptr=&number1;
	printf(" Real part : %d\n imaginary part : %d\n",ptr->real,ptr->imaginary);
	int z =(ptr->real)*(ptr->real)+(ptr->imaginary)*(ptr->imaginary);
	printf("Modulus : %d\n",z);
	return 0;
} 