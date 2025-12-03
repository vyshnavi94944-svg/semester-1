# include<stdio.h>
# include<math.h>
int main()
{
	int num;
	float result;
	printf("enter a number:");
	scanf("%d", &num);
	result=sqrt(num); //using sqrt function from math.h headerfile
	printf("%f",result);
	return 0;
}
