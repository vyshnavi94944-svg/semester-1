# include<stdio.h>
int main()
{
	float a,u,t,d;
	printf("enter acceleration");
	scanf("%f", &a);
	printf("enter initial velocity");
	scanf("%f", &u);
	printf("enter time");
	scanf("%f", &t);
	d=u*t+(a*t*t)/2;
	printf("%f",d);
	return 0;
	}
