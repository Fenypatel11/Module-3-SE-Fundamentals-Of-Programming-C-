//29.Convert minutes into seconds and hours

#include<stdio.h>
int main()
{
	int min,sec,hours;
	
	//minutes into seconds
	
	printf("-----Minutes Into Seconds-----\n");
	printf("\nEnter Minutes : ");
	scanf("%d",&min);
	sec=min*60;
	printf("\nMinutes into Second: %d\n",sec);
	
	//minutes into hours
	
	printf("\n-----Minutes Into Hours-----\n");
	printf("\n Enter min : ");
	scanf("%d",&min);
	hours=min/60;
    printf("\n Minutes into Hours: %d",hours);
	
	
	return 0;
}
