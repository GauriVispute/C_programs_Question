#include<stdio.h>
void
main ()
{
  int n;
  printf ("Enter the array size : ");
  scanf ("%d", &n);
  int arr[n], element;
  for (int i = 0; i < n; i++){
      scanf ("%d", &arr[i]);
    }
  printf ("Enter the element : ");
  scanf ("%d", &element);

  n = n + 1;
  arr[n - 1] = element;
  for (int i = 0; i < n; i++){
      printf ("%d ", arr[i]);
    }
}
/*
//insert a number  in dynamic allocation size of array   
 #include<stdio.h>
 #include<stdlib.h>
 void main(){
    int n ,element;
    printf("Enter  array size : ");
    scanf("%d",&n);
    
    int *ptr;
    ptr=(int *) calloc(n, sizeof(int));
    
    printf("Enter %d numbers : \n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    
    printf("Enter element : ");
    scanf("%d",&element);
    
    int temp;
    n++;
    ptr[n-1]=element;
    
        for(int i=0;i<n;i++){
        printf("%d ",ptr[i]);
    }
 }
*/