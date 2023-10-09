#include<stdio.h>
void insertion_sort(int a[],int n)
{
 int temp,i,j;
 for(i=1;i<n;i++)
 {
  temp=a[i];
  for(j=i-1;j>=0&&a[j]>temp;j--)
  {
	a[j+1]=a[j];
  }
  a[j+1]=temp;
 }
}
int main()
{
 int a[20],n,i;
 clrscr();
 printf("enter size:");
 scanf("%d",&n);
 printf("enter unsorted list:");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 insertion_sort(a,n);
 printf("sorted list:");
 for(i=0;i<n;i++)
	printf("%d\t",a[i]);
 getch();
 return 0;
}

