int main()
{
	int a[100],i,n,pass,t;
	
	printf("enter limit:");
	scanf("%d",&n);
	printf("enter n number:");
	for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);
	}
	for(pass=1;pass<n;pass++)
	{
		for(i=0;i<n-pass;i++)
		{
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	printf("sort numbers=");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}

