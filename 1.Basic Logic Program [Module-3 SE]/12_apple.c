/*12.Accept number of students from user. I need to give 5 apples to each
student. How many apples are required?*/

#include<stdio.h>
int main()
{
	int students,ans;
	printf("Enter a number of students : ");
	scanf("%d",&students);
	printf("Total apples are required : %d",ans=students*5);
	return 0;
}
