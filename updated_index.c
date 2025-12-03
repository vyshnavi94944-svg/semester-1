#include<stdio.h>
int main()
{
	int i,n,a[10],index;
	printf("enter the n value:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter array elements are;\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
    printf("enter index to update");
	scanf("%d",&index);
	a[index]=9;
	printf("updated array elements are:\n");
	for(i=0;i<n;i++){
		printf("\n%d",a[i]);
	}
}
