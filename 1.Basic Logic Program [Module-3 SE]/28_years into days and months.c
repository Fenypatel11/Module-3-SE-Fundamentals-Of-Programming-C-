//28.Convert years into days and months

#include<stdio.h>
int main()
{
	int years,days,months;
	printf("-------Years into days-------\n");
	printf("Enter the numbers of years : ");
	scanf("%d",&years);
	printf("Years into days : %d",years*365);
	
		printf("\n\n-------Years into months-------\n");
	printf("Enter the numbers of years : ");
	scanf("%d",&years);
	printf("Years into months : %d",years*12);
	
	
	return 0;
}
