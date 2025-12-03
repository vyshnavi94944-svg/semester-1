#include<stdio.h>
int main()
{
	int num,sum,rem,temp;
	printf("enter a number:");
	scanf("%d",&num);
	temp=num;
	sum=0;
	while(num!=0)
	{
		rem = num%10;
		sum+=(rem*rem*rem);
		num=num/10;
	}
	if(sum==temp)
	{
		printf("the num is armstrong");
	}
	else
	{
	printf("the num is not armstrong");
    }
	return 0;
}
