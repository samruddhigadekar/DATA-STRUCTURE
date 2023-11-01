#include<stdio.h>
#include<conio.h>
typedef struct node
{
	int data;
   struct NODE *next;
}node;
node *create(node *list)
{
	node *newnode,*temp;
	int i,n;
	printf("enter  node limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(node *)malloc(sizeof(node));
		newnode->next=NULL;
		printf("enter node data");
		scanf("%d",&newnode->data);
		if(list==NULL)
		{
			list=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		
	}
	return list;
}

node *revlist(node *list)
{
	node *temp,*temp1,*temp2;
	temp=list;
	temp1=temp->next;
	temp2=temp1->next;
	temp->next=NULL;
	while(temp2!=NULL)
	{
		temp1->next=temp;
		temp=temp1;
		temp1=temp2;
		temp2=temp2->next;
		
	}
	temp1->next=temp;
	return temp1;
}
void display(node *list)
{
	node *temp=list;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
		
	}
}

int main()
{
	node *list=NULL;
	list=create(list);
	printf("\n orignal string:");
	display(list);
	printf("\n reverce list:");
	list=revlist(list);
	display(list);
}
/*/void *revlist(node *list)
{
	node *temp,*temp1;
	if(list!=NULL)
	{
		temp=list;
		temp1=temp->next;
		list=list->next;
		temp->next=NULL;
	
	while(temp!=NULL)
	{
		temp=temp->next;
		temp1->next=list;
		temp=temp1;
		temp1=list;
	}
	list=temp;
	}
	
	return list;
	
}/*/
/*/void *revlist(node *list)
{
	node *temp=NULL,*temp1=NULL;
	while(temp!=NULL)
	{
		list=temp->next;
		temp1=temp->next;
		temp=temp1;
		temp1=list;
	}
	temp=list;
}/*/
