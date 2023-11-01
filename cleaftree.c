#include<stdio.h>
#include<conio.h>
struct node
{
	int data;
	struct node *left,*right;
}*root;
struct node *insert(struct node *root,int num)
{
	if(root==NULL)
	{
		root=(struct node *)malloc(sizeof(struct node));
		root->data=num;
		root->left=NULL;
		root->right=NULL;
		return root;
	}
	if(num>root->data)
	{
		root->right=insert(root->right,num);
		return root;
	}
	if(num<root->data)
	{
		root->left=insert(root->left,num);
		return root;
	}
	
}
void leaf(struct node *root)
{
	if(root!=NULL)
	{
		leaf(root->left);
		if(root->left==NULL && root->right==NULL)
		    printf("%d\t",root->data);
			leaf(root->right);
    }
}

void nonleaf(struct node *root)
{
	if(root!=NULL)
	{
	 
		if(root->left!=NULL && root->right!=NULL)
		    printf("%d\t",root->data);
			nonleaf(root->left);
			nonleaf(root->right);
    }
}


int main()
{
	int num,ch,n,i;
	root=NULL;
	do
	{
	 printf("\n 1-insert \n 2:leaf node \n 3:non-leaf node");
	 printf("\n enter choice:");
	 scanf("%d",&ch);
	 switch(ch)
	 {
	 	case 1:printf("enter limit:");
	 	       scanf("%d",&n);
	 	       for(i=0;i<n;i++)
	 	       {
	 	       	    printf("\n enter num:");
	 	       	    scanf("%d",&num);
	 	       	    root=insert(root,num);
			   }
			   break;
		case  2:leaf(root);
		        break;
		case 3:nonleaf(root);
		       break;
	 }	
	}while(ch<4);
}
