//26.Convert temperature Fahrenheit to Celsius

#include<stdio.h>
int main()
{
	int fahrenheit,celsius;
	printf("------Fahrenheit to Celsius-------\n");
	printf("Enter temperature in Fahrenheit : ");
	scanf("%d",&fahrenheit);
	printf("Fahrenheit to celsius : %d",(fahrenheit-32)*5/9);
	return 0;
}
