# include<stdio.h>
int main()
{
	float base,height,area;
	printf("enter the base:");
	scanf("%f", &base);
	printf("enter height value:");
	scanf("%f", &height);
	area=0.5*base*height;
	printf("area of triangle:%f",area);
	return 0;
	}
