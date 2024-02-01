#include <stdio.h>
int main()
{
		int i,total[5],eng[5],hindi[5],guj[5],per[5];
		char grade[5];
		
		for(i=0;i<5;i++)
		{
			printf("\nEnter the %d student marks ---->\n",i+1);
			printf("Enter the marks of eng :- ");
			scanf("%d",&eng[i]);
			printf("Enter the marks of hindi :- ");
			scanf("%d",&hindi[i]);
			printf("Enter the marks of guj :- ");
			scanf("%d",&guj[i]);
			
			total[i]=eng[i]+hindi[i]+guj[i];
			per[i]=(total[i]*100)/300;
		}
		
		printf("\nNo.\teng\thindi\tguj\ttotal\tper\tgrade\n");
		
		for(int i=0;i<5;i++)
		{
			printf("\n%d\t%d\t%d\t%d\t%d\t%d\t",i+1,eng[i],hindi[i],guj[i],total[i],per[i],grade[i]);
			
			if(per[i]>=90)
			{
				printf("Grade A");
			}
			else if(per[i]>=80)
			{
				printf("Grade B");
			}
			else if(per[i]>=70)
			{
				printf("Grade C");
			}
			else if(per[i]>=60)
			{
				printf("Grade D");
			}
			else if(per[i]>=45)
			{
				printf("Grade E");
			}
			else
			{
				printf("Fail");
			}
		}

	
	return 0;
	
}