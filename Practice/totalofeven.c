#include <stdio.h>
int main()
{
	int i,n,sum;
	
	printf("Enter the value of n :- ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		if(i%2==0){
		 sum+=i;
		}
	}
	
	printf("Total is :- %d",sum);
	
	return 0;
	
}	