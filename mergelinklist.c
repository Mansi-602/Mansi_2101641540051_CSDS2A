#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
}*head1,*head2;

void firstll()
{
    int val;
    printf("enter value");
    scanf("%d",&val);
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->link= NULL;
    if(head1 == NULL)
         head1 = newNode;
    else
    {
        struct node *temp1 = head1;
        while(temp1->link != NULL)
        {
            temp1 = temp1->link;
        }
        temp1->link = newNode;
    }
}

void printList1()
{
    struct node *temp = head1;
    while(temp != NULL)
    {
         printf("%d->", temp->data);
         temp = temp->link;
    }
    printf("NULL\n");
}
void secondll()
{
    int val;
    printf("enter value");
    scanf("%d",&val);
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->link= NULL;
    if(head2 == NULL)
         head2 = newNode;
    else
    {
        struct node *temp1 = head2;
        while(temp1->link != NULL)
        {
            temp1 = temp1->link;
        }
        temp1->link = newNode;
    }
}

void printList2()
{
    struct node *temp = head2;
    while(temp != NULL)
    {
         printf("%d->", temp->data);
         temp = temp->link;
    }
    printf("NULL\n");
}
void merge(){
 struct node*s,*t,*newnode;
 newnode=(struct node*)malloc(sizeof(struct node));
 s=head1;
 t=head2;
 while(s!=NULL && t!=NULL){
  if(s->data < t->data){
   newnode->data=s->data;
   printf("%d->",newnode->data);
   s=s->link;
  }
  else{
   newnode->data=t->data;
   printf("%d->",newnode->data);
   t=t->link;
  }
 }
  while(s!=NULL){
   newnode->data=s->data;
   printf("%d->",newnode->data);
   s=s->link;
  }
  while(t!=NULL){
   newnode->data=t->data;
   printf("%d->",newnode->data);
   t=t->link;
  }
 
}


int main()
{
     firstll();
     firstll();
     firstll();
     firstll();
     firstll();
     printList1();
     secondll();
     secondll();
     secondll();
     printList2();
     merge();
     return 0;
}
