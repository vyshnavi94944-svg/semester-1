#include<stdio.h>
#include<string.h>
int main()
{
	char name[10],full_name[20],Address[30];
	printf("Enter your name:");
	scanf("%s",name);
	printf("%s\n",name);
	
	getchar();
	
	printf("Enter full name:");
	fgets(full_name,sizeof(full_name),stdin);
	printf("\n%s",full_name);
}
