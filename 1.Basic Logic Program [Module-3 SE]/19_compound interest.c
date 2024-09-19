//19.Calculate compound interest

#include<stdio.h>
int main()
{
	float compoundInterest, principal, rate, period, amount;
	printf("Enter principal = ");
	scanf("%f",&principal);
	printf("Enter rate = ");
	scanf("%f",&rate);
	printf("Enter period = ");
	scanf("%f",&period);
	amount = principal * (pow((1 + (rate / 100)),period));
	compoundInterest = amount - principal;
	printf("Compound Interest: %.2f",compoundInterest); 
	return 0;
}
