#include<stdio.h>
void selection_sort(int a[],int n)
{
 int temp,i,j,temp1;
 for(i=0;i<n;i++)
 {
  temp=a[i];
  for(j=i+1;j<n;j++)
  {
	if(a[j]<temp)
	{
	 temp1=temp;
	 temp=a[j];
	 a[j]=temp1;
	}
  }
 a[i]=temp;
}
}
int main()
{
 int a[20],n,i;
 clrscr();
 printf("\n enter size:");
 scanf("%d",&n);
 printf("enter unsort data:");
 for(i=0;i<n;i++)
	scanf("%d",&a[i]);
 selection_sort(a,n);
 printf("sort data:");
 for(i=0;i<n;i++)
 {
  printf("\t%d",a[i]);
 }
getch();
return 0;
}

