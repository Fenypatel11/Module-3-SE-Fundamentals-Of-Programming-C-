//31. Convert kilometers into meters

#include<stdio.h>
int main()
{
	int km,meter;
	printf("-------Kilometers Into Meters-------\n");
	printf("\nEnter Kilometer : ");
	scanf("%d",&km);
	meter=km*1000;
	printf("Kilometer To Meter : %d ",meter);
	
	return 0;
}
