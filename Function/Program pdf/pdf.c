#include <stdio.h>

void reverse(int n)
{
	int a;
	
	printf("Enter the value :- ");
	scanf("%d",&n);
	
	while(n>0)
	{
		a=n%10;
		printf("%d",a);
		n=n/10;
	}

}

void perfectnum()
{
	int num,rem,sum=0;
	
	printf("Enter the number :- ");
	scanf("%d",&num);
	
	for(int i=1;i<num;i++)
	{
		rem=num%i;
		if(rem==0)
		{
			sum=sum+i;
		}
	}
	if(sum==num)
	{
		printf("Number is a Perfect Number.");
	}
	else
	{
		printf("Number is not a Perfect Number.");
	}
}

//int coin(int amt)
void coin()
{
	int a[]={20,10,5,2,1},i,p,amt;
	
	printf("Enter the amount :- ");
	scanf("%d",&amt);
	
	for(i=0;i<10;i++)
	{
		if(amt>=a[i])
		{
			p=amt/a[i];
			printf("\n%d - %d",a[i],p);
			amt=amt%a[i];
		}
	}
}

int main()
{
	/*int n;
	reverse(n);*/
	
	//perfectnum();
	
	/*int a[]={20,10,5,2,1},i,amt,p;
	printf("Enter the amount :- ");
	scanf("%d",&amt);
	coin(amt);*/
	coin();
	
	return 0;
}
