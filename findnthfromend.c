#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node * next;
};
void print(struct node* p)
{
	while(p!=NULL)
	{
		printf("element is:%d\n",p->data);
		p=p->next;
	}
}
findnthfromend(struct node*head,int n)
{
	struct node*s=head;
	struct node*h=head;
	while(n>0)
	{
		s=s->next;
		n--;
	}
	while(s->next!=NULL)
	{
		h=h->next;
		s=s->next;
}
    printf("nth term is: %d\n",h->data);
}
void main()
{
	struct node *head;
	struct node *second;
	struct node *third;
	struct node *fourth;
	struct node *fifth;
	struct node *sixth;
	
	head=(struct node* )malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	fourth=(struct node*)malloc(sizeof(struct node));
	fifth=(struct node*)malloc(sizeof(struct node));
	sixth=(struct node*)malloc(sizeof(struct node));
	
	head->data=10;
	head->next=second;
	second->data=20;
	second->next=third;
	third->data=30;
	third->next=fourth;
	fourth->data=40;
	fourth->next=fifth;
	fifth->data=50;
	fifth->next=sixth;
	sixth->data=60;
	sixth->next=NULL;
	
	findnthfromend(head,3);
	//print(head);
}
