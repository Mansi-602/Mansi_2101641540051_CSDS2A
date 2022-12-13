#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
void Middle(struct node* head)
{
	struct node*s;
	int mid;
	int c=0;
	s=head;
	while(s!=NULL)
	{
		c++;
		s=s->next;
	}
	   mid=c/2;
	if(c&1==0)
	{
		mid-=1;
	}
	s=head;
	while(mid>0)
	{
		s=s->next;
		mid-=1;
	}
	printf("%d",s->data);
}
int main()
{
		
	struct node*head=(struct node*)malloc(sizeof (struct node));
	struct node*second=(struct node*)malloc(sizeof (struct node));
	struct node*third=(struct node*)malloc(sizeof (struct node));
	head->data=15;
	head->next=second;
	second->data=25;
	second->next=third;
	third->data=35;
	third->next=NULL;
	Middle(head);
	
}
