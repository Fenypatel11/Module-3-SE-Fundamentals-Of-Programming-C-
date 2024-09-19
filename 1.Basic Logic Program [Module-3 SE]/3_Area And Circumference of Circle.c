//3. WAP to Find Area And Circumference of Circle 

#include<stdio.h>
int main()
{
	float radius,area;
	printf("-------Area of circle-------\n");
	printf("Enter radius : ");
	scanf("%f",&radius);
	printf("Area is : %f",3.14*radius*radius);
	
	printf("\n\n-------Circumference of circle-------\n");
	printf("Enter radius : ");
	scanf("%f",&radius);
	printf("Circumference is : %f",2*3.14*radius);
	return 0;
}
