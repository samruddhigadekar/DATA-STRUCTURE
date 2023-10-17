#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
       node *next;
}NODE;
 node *create(node *list)
{
	node *newnode,*temp;
	int i,num;
	printf("enter limit:");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		newnode=(node *)malloc(sizeof( node));
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
void *display( node *list)
{
       node *temp=list;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;		
	}
}
int count( node *list)
{
   node *temp=list;
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
	 node *list=NULL;
	list=create(list);
    display(list);
    list=count(list);
	printf("\n total node of list%d",list);
}

