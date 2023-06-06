#include<stdio.h>

int main()
{
	
	int x;
	int y,max;
	
	printf("Enter the value of X:");
	scanf("%d",&x);
	printf("Enter the value of Y:");
	scanf("%d",&y);
	
	max = x>y ? x:y;
	
	printf("The max number is %d",max);
	
	return 0;
}
