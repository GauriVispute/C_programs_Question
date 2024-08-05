#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node *head=NULL;
void create (){
    struct node *temp=NULL,*ptr=NULL;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d",&temp->data);
    temp->link = NULL;
    if(head == NULL){
       head = temp;
    }
    else{
        ptr=head;
        while(ptr->link != NULL){
            ptr = ptr->link;
        }
        ptr->link=temp;
    }
    printf("\n");
}
void displayList(){
    struct node *ptr=head;
        while(ptr != NULL){
            printf("%d->",ptr->data);
            ptr=ptr->link;
        }
    printf("\n");
}
void search(int *number){
    int count=0;
    struct node *ptr=head;
    while(ptr != NULL){
        count++;
         if(ptr->data == *number){
             printf("Element in index : %d",count);
             break;       
          }
        ptr=ptr->link;
    }
}
int main() {
  int key,number;
  while(1){
      printf("1} create\n");
      printf("2} displayList\n");
      printf("3} Search\n");
      printf("4} exit\n");
      printf("Enter your choice : ");
      scanf("%d",&key);
      switch(key){
          case 1 : create();
          break;
          case 2 : displayList();
          break;
          case 3 : printf("Enter number : ");
                   scanf("%d",&number);
                   search(&number);
                   printf("\n");
                   break;
          case 4 : exit(0);
          break;
          default: printf("Oops wrong i/p\n");
          break;
      }
  }

    return 0;
}