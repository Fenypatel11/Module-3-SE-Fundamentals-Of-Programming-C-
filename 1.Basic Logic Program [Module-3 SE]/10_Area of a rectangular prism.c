//10.find the area of a rectangular prism formula : A=2(wl+hl+hw) 

#include<stdio.h>
int main()
{
	int ans,w,l,h;
	printf("------Area of a rectangular prism------\n");
	printf("Enter length : ");
	scanf("%d",&l);
	
	printf("Enter width : ");
	scanf("%d",&w);
	
	printf("Enter height : ");
	scanf("%d",&h);
	
    ans=2*((w*l)+(h*l)+(h*w));
	printf("Area of a rectangular prism is : %d",ans);
	return 0;
}
