#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head =NULL;
void create(){
// node creation every time 
    struct node *temp=NULL,*ptr=NULL;
    temp = (struct node *) malloc(sizeof(struct node));
    printf("Enter element : ");
    scanf("%d",&temp->data);
    temp->next = NULL;
   
    if(head == NULL){
        head=temp;
    }
    else{
/*traverse till NULL COUNTERS 
 for next attachement of node */
       //struct node *ptr=head;
        ptr=head;
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next=temp;
    }
}
void displayList(struct node *ptr){
     while(ptr != NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
     }
printf("\n");
}
int  listLength(){
struct node *ptr=head;
      int count =0;
      while(ptr != NULL){
        count++;
        ptr = ptr->next;
     }
return count ;
}
void addAtBeginning(){
    struct node *temp=(struct node *) malloc(sizeof(struct node));
    printf("Enter element : ");
    scanf("%d",&temp->dacta);
    temp->next=NULL;
    if(head==NULL){// head not present 
        head=temp;
    }
    else{
       temp->next=head;//right, 1st node address 
       head=temp;// address of temp into head,left connection
    }
}
void deleteAtBeginning(){
     struct node *temp=(struct node *) malloc(sizeof(struct node));
     if(head == NULL){
        printf("empty list");
    }
    
    temp=head->next;//address of head   
    head->next=NULL;
    head=temp;
}
int main(){
    int key;
    while(1){
        printf("1] create node\n2] display List\n3]List Length\n4]Add At beginning\n5]delete From Beginning\n6]exit\n");
        printf("Enter choice : ");
        scanf("%d",&key);
        switch(key){
            case 1 : create();
            break;
            case 2 : displayList(head);
            break;
            case 3 : printf("Length of list : %d\n",listLength());
            break;
            case 4 : addAtBeginning();
            break;
            case 5 : deleteAtBeginning();
            break;
            case 6 : exit(0); 
            break;
            default : printf("oops wrong i/p\n");
        }
        printf("\n");
   }
    return 0;
}

//ptr->next = temp is the another node.