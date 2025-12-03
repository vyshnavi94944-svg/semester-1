#include<stdio.h>
int main()
{
	int i,n,a[10],j,temp;
	printf("enter n value:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
		}
	}
	}
    printf("sorted array elements");
	for(i=0;i<n-1;i++)
	printf("%d ",a[i]);
}
	

