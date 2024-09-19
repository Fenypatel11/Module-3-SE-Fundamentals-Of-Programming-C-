//4. WAP to print table up to given numbers


#include<stdio.h>
int main()
{
	int num1,num2,i;
	printf("Enter the number1 : ");
	scanf("%d",&num1);
	printf("Enter the range : ");
	scanf("%d",&num2);
	
	for(i=1;i<=num2;i++)
	{
		printf("\n%d x %d = %d",num1,i,num1*i);
	}
	
	return 0;
}
