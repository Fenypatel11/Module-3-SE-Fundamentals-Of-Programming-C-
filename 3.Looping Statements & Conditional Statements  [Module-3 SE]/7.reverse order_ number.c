/*7. WAP to print number in reverse order e.g.: number = 64728 ---> reverse =
82746*/

#include<stdio.h>
int main()
{
	int num,reverse = 0,rem;
	
	printf("\nEnter the number = ");
	scanf("%d",&num);
	int copy = num;
	
	while(num!=0)
	{
		rem = num%10;
		reverse = (reverse*10)+rem;
		num = num/10;
	}
	
	printf("\nOriginal number = %d",copy);
	printf("\nReversed number = %d",reverse);
	
	return 0;
}
