#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node* link;
    int data;
};
struct node* display(struct node* head){
    struct node* ptr = head;
    while(ptr!=NULL){
        printf("%d ", ptr->data);
        ptr = ptr ->link;
    }
}

void insert_at_beg(struct node* head){
    struct node* new = malloc(sizeof(struct node));
    printf("enter the data into your node: ");
    scanf("%d",&new->data);
    new->link=head;
    head=new;
    display(head);
}
void insert_at_end(struct node* head){
    struct node* ptr =head;
    while(ptr->link!=NULL){
        ptr=ptr->link;
    }
    if(ptr->link==NULL){
        struct node* new = malloc(sizeof(struct node));
        printf("enter the data into your node: ");
        scanf("%d",&new->data);
        new->link=NULL;
        ptr->link=new;
        display(head);
    }
}
void insert_at_any(struct node* head){
    int key;
    printf("enter the key to find");
    scanf("%d",&key);
    struct node* ptr=head;
    while(ptr->data!=key&&ptr!=NULL){
        ptr=ptr->link;
    }
    if(ptr->data==key){
     struct node* new = malloc(sizeof(struct node));
        printf("enter the data into your node: ");
        scanf("%d",&new->data);
        struct node* ptr1 = ptr->link;
        ptr->link=new;
        new->link=ptr1;
    display(head);
    }else{
        printf("key not found");
    }
}
void delete_at_beg(struct node* head){
    struct node *temp = head;
    head=head->link;
    free(temp);
    display(head);
}

void delete_at_end(struct node* head){
    struct node* ptr = head;
    struct node* ptr1;
    while(ptr->link!=NULL){
        ptr1=ptr;
        ptr=ptr->link;
    }
    if(ptr->link==NULL){
        
        ptr1->link=NULL;
        free(ptr);
        display(head);
    }

}
void delete_at_any(struct node* head){
    int key;
    printf("enter the key to find");
    scanf("%d",&key);
    struct node* ptr=head;
    struct node* ptr1;
    while(ptr->data!=key&&ptr!=NULL){
        ptr1=ptr;
        ptr=ptr->link;
    }
    if(ptr->data==key){
        ptr1->link=ptr->link;
        ptr->link=NULL;
        free(ptr);
        display(head);
    }
}
void main(){
    int limit,i,choice;
    printf("enter the no. of node: ");
    scanf("%d",&limit);
    struct node* a[20];

    for(i=0;i<limit;i++){
        a[i]=malloc(sizeof(struct node));
        printf("enter the data into the node: ");
        scanf("%d",&a[i]->data);
        if(i!=0){
            a[i-1]->link=a[i];
            a[i]->link=NULL;
        }
    }
    struct node* head = a[0];
    printf("The data in the nodes you entered are : \n");
    display(head);

   
    do{
         printf("\nenter the choice of operation\n1 for insertion at beginning\n2 for insertion_at_end\n3 for insertion_at_any\n4 for deleting from beginning\n5 for deleting at end\n6 for deleting at any position\n7 for exit: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1: insert_at_beg(head);
            break;
        case 2: insert_at_end(head);
                break;
        case 3: insert_at_any(head);
                break;
        case 4: delete_at_beg(head);
                break;
         case 5: delete_at_end(head);
                break;
        case 6: delete_at_any(head);
                break;
        default:
            break;
        }

    }while(choice!=7);
}
