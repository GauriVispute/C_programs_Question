#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	ptr = (int *) calloc(5,sizeof(int));
	printf("Enter 5 numbers : \n");
	for (int i =0;i<5;i++)
	    scanf("%d",&ptr[i]);

	printf("\n");

	ptr=realloc(ptr,8);

	printf("Enter 8 numbers : \n");
	for (int i =0;i<8;i++){
	    scanf("%d",&ptr[i]);
	}

	for (int i =0;i<8;i++){
	    printf("number %d at %d\n",ptr[i],i);
	}
	return 0;
}