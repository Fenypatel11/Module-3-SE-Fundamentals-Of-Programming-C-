//5. WAP to print factorial of given number

#include<stdio.h>
int main()
{
	int num,i,fact=1;
	printf("\nEnter the number : ");
	scanf("%d",&num);
	
	for(i=num;i>=1;i--)
	{
			fact = fact * i;
	}
	printf("\nFactorial of %d is %d",num,fact);
	return 0;
}
