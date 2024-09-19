//8. Find circumference of Rectangle formula : C = 4 * a 
//P = 2l + 2w

#include<stdio.h>
int main()
{
	int l,w,ans;
	printf("-------circumference of Rectangle-------\n");
/*	printf("Enter side : ");
	scanf("%d",&a);
	printf("circumference of Rectangle is : %d",ans=4*a);*/
	
	printf("Enter length: ");
	scanf("%d",&l);
	
	printf("Enter width : ");
	scanf("%d",&w);

	printf("circumference of Rectangle is : %d",ans=2*w + 2*l);
	return 0;
}
