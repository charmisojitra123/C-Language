#include <stdio.h>

int main()
{	
	int a;
	
	printf("Enter the value :- ");
	scanf("%d",&a);
	
	switch(a)
	{
		case 1:
		printf("Monday");
		break;
		
		case 2:
		printf("Tuesday");
		break;
		
		case 3:
		printf("Wedenesday");
		break;
		
		case 4:
		printf("Thursday");
		break;
		
		case 5:
		printf("Friday");
		break;
		
		case 6:
		printf("Saturday");
		break;
		
		case 7:
		printf("Sunday");
		break;
		
		default:
		printf("The value is invalid.");
		
	}
	
	return 0;
	
}