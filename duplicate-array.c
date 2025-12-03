#include<stdio.h>
int main()
{
	int i,n,a[10],j,k,found=0;
	printf("enter n value:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(a[i]==a[j]){
        for(k=0;k<i;k++){
        	if(a[k]==a[i])
        	break;
		}
		if(k==i)
		{
			printf("%d",a[i]);
			found=1;
		}
		   	}
		}
	}
	if(found==0)
	{
		printf("no duplicate elements");
	}
}
