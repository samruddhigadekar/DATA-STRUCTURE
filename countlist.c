#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
    struct node *next;
}NODE;
struct node *create(struct node *list)
{
	struct node *newnode,*temp;
	int i,num;
	printf("enter limit:");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		newnode=(struct node *)malloc(sizeof(struct node));
		newnode->next=NULL;
		printf("enter element:");
		scanf("%d",&newnode->data);
		if(list==NULL)
		{
			list=temp=newnode;
		}
		{
			temp->next=newnode;
			temp=newnode;
		}
	}
return list;
}
void *display(struct node *list)
{
	struct node *temp=list;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;		
	}
}
int count(struct node *list)
{
	struct node *temp=list;
    int cnt=0;
    while(temp!=NULL)
    {
    	cnt++;
    	temp=temp->next;
	}
	return cnt;
}
void main()
{
	struct node *list=NULL;
	list=create(list);
    display(list);
    list=count(list);
	printf("\n total node of list%d",list);
}

