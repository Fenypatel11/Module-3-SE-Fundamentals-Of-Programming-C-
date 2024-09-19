/*2. Write a program to make Simple calculator (to make addition, subtraction, 
multiplication, division and modulo)*/

#include <stdio.h>
int main()
{
	int a,b;
	printf("-------Enter the value for addition-------\n");
	printf("Enter a : ");
	scanf("%d",&a);
	printf("Enter b : ");
	scanf("%d",&b);
	printf("sum : %d",a+b);
	
	printf("\n-------Enter the value for subtraction-------\n");
	printf("Enter a : ");
	scanf("%d",&a);
	printf("Enter b : ");
	scanf("%d",&b);
	printf("subtraction : %d",a-b);
	
	printf("\n-------Enter the value for multiplication-------\n");
	printf("Enter a : ");
	scanf("%d",&a);
	printf("Enter b : ");
	scanf("%d",&b);
	printf("multiplication : %d",a*b);
	
	printf("\n-------Enter the value for  division-------\n");
	printf("Enter a : ");
	scanf("%d",&a);
	printf("Enter b : ");
	scanf("%d",&b);
	printf(" division : %d",a/b);
	
	printf("\n-------Enter the value for   modulo-------\n");
	printf("Enter a : ");
	scanf("%d",&a);
	printf("Enter b : ");
	scanf("%d",&b);
	printf("  modulo : %d",a%b);
	return 0;
	
}
