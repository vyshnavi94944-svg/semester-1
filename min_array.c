#include<stdio.h>
int main()
{
	int n,i,a[10],min;
	printf("enter n value");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
   }
    for(i=0;i<n;i++)
   {
	printf("%d",&a[i]);  
   }
   min=a[0];
   for(i=1;i<n;i++)
   {
   	if(a[i]<min)
   	{
   		min=a[i];
	   }
   }
  printf("minimum element is: %d",min); 
}
