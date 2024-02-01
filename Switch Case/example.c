#include <stdio.h>

int main()
{	
	int a;
	
	printf("Enter the value :- ");
	scanf("%d",&a);
	
	switch(a)
	{
		case 10:
		printf("The value is 10.");
		break;
		
		case 12:
		printf("The value is 12.");
		break;
		
		case 15:
		printf("The value is 15.");
		break;
		
		default:
		printf("The value is not 10,12 or 15.");
		
	}
	
	return 0;
	
}