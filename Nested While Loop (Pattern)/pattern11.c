#include <stdio.h>
int main()
{
	int i=1,n=1;
	
	while(i<=5)
	{
		int j=1;
		while(j<=i)
		{
			if(n%2==1){
				printf("1 ");
			}
			else{
				printf("0 ");
			}
			n++;
			j++;
		}
		printf("\n");
		i++;
	}
	
	return 0;
	
}