# include<stdio.h>
int main()
{
	int num;
	float n;
	char grade;
	char name;
	printf("enter a num:");
	scanf("%d",&num);
	printf("enter n value:");
	scanf("%f",&n);
	printf("enter grade");
	scanf(" %c",&grade);
	printf("enter name");
	scanf("%s",&name);
	printf("%d/n%f/n%c/n%s,num,n,grade,name");
	return 0;
}
