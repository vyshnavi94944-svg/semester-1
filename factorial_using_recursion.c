#include<stdio.h>
int factorial(int n)
{
	if(n<=1)
	return 1;
	else
	return n * factorial(n-1);
}
int main()
{
 int n;
 printf("Enter n value:");
 scanf("%d", &n);
 printf("factorial of %d is %d",n, factorial(n)); 
 return 0;
} 
 
