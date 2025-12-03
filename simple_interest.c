# include<stdio.h>
int main()
{
	int p,t,r,si;
	printf("enter principle amount");
	scanf("%d",&p);
	printf("enter time");
	scanf("%d",&t);
	printf("enter rate of interest");
	scanf("%d",&r);
	si=(p*t*r)/100;
	printf("%d",si);
	return 0;
}
