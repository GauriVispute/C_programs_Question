//insert a number  in dynamic allocation size of array   
 void insert(int arr[],int *n,int *element);
 void delete(int arr[],int *n);
 void traverse(int arr[],int *n);
 #include<stdio.h>
 #include<stdlib.h>
int main(){
     int n ,*ptr;
     ptr=(int *) calloc(n,sizeof(int));
     
     printf("Enter size of array : ");
     scanf("%d",&n);
     
     printf("Enter %d numbers : \n",n);
     for(int i =0 ; i<n;i++){
         scanf("%d",&ptr[i]);
     }
     
     int key;
     printf("Menu\n1.Insert\n2.Delete\n3.Exit\n");
     scanf("%d",&key);
     
         switch(key){//at last element 
             case 1 : //Insert
                      {  int element;
                         printf("Enter element : ");
                         scanf("%d",&element);
                         insert(ptr,&n,&element);
                         traverse(ptr,&n);
                         break;
                         }
             case 2 :{ delete(ptr,&n); //Delete
                       traverse(ptr,&n);}
             case 3 : break;
             default : printf("Invalid Input !");
         }
         return 0;
 }
void insert(int arr[],int *n,int *element){
    (*n)++;
    arr[*n-1]= *element;
}
void delete(int arr[],int *n){
    int temp;
    temp=arr[*(n-1)];
    (*n)--;
}
void traverse(int arr[],int *n){
    for(int i=0;i<*n;i++){
        printf("%d ",arr[i]);
    }
}