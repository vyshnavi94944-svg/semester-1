#include<stdio.h>
int main()
{
	char s1[20];
	printf("Enter a sentence:\n");
	fgets(s1,sizeof(s1),stdin);
	printf("%s",s1);
	
}
