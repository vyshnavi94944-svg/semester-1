#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100],result[200];
	int choice, i,j, flag, len;
	printf("1. Find length\n");
	printf("2. Copy String\n");
	printf("3. Compare Strings\n");
	printf("4. Concatenate Strings\n");
	printf("5. Convert to Uppercase\n");
	printf("6. Convert to Lowercase\n");
	printf("7. Reverse Strings\n");
	printf("Enter your choice: ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
		
			printf("Enter a string: ");
			scanf(" %[^\n]", s1);
			
			len = 0;
			for(i = 0; s1[i] != '\0'; i++)
			  len++;
			
			printf("Length of string = %d\n", len);
			break;
		
		
		case 2:
			
			printf("Enter source string: ");
			scanf(" %[^\n]", s1);
			
			for(i = 0; s1[i] != '\0'; i++){
			s2[i] = s1[i];}
			
			s2[i] = '\0';
			printf("Copied string is %s\n", s2);
			break;
		
		case 3:
			
			printf("Enter first string: ");
			scanf(" %[^\n]", s1);
			printf("Enter a second string: ");
			scanf(" %[^\n]", s2);
			
			flag = 0;
			for(i = 0; s1[i] != '\0' || s2[i] != '\0'; i++) {
				if(s1[i] != s2[i]) {
					flag = 1;
					break;
				}
		   }
		   if(flag == 0)
			  printf("Strings are EQUAL\n");
			else
		     printf("Strings are NOT equal\n");	
	        break;
		case 4:
	
			printf("Enter first string: ");
			scanf(" %[^\n]", s1);
			printf("Enter second string: ");
			scanf(" %[^\n]", s2);
			 for(i = 0; s1[i] != '\0'; i++)
			 result[i] = s1[i];
			 
			 for(j = 0; s2[j] != '\0'; j++)
			   result[i + j] = s2[j];
			   
			   result[i + j] = '\0';
			printf("Concatenated string = %s\n",result);
			break;	
		
	     case 5:
			
			printf("Enter a string: ");
			scanf(" %[^\n]", s1);
			
			for(i = 0; s1[i] != '\0'; i++)
			if(s1[i] >= 'a' && s1[i] <= 'z')
			s1[i] = s1[i] - 32;
			
			printf("Uppercase string = %s\n", s1);
			break;	
		
		case 6:
			
			printf("Enter a string:");
			scanf(" %[^\n]", s1);
			
			for(i = 0; s1[i] != '\0'; i++)
			if(s1[i] >= 'A' && s1[i] <= 'Z')
			s1[i] = s1[i] + 32;
			
			printf("Lowercase string = %s\n",s1);
			break; 	
	    case 7:
	
			printf("Enter a string:");
			scanf(" %[^\n]",s1);
			
			len = 0;
			for(i = 0; s1[i] != '\0'; i++)
			len++;
			
			printf("Reverse string = ");
			for(i = len - 1; i>= 0; i--)
			printf("%c", s1[i]);
			
			printf("\n");
			break;
		
		default :
				printf("invalid option");
	
  }
    return 0;
}
