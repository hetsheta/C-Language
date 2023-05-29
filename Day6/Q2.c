#include<stdio.h>

int main()
{
	int x;
	int y;
	int ans;
	
	printf("Enter the value of X:");
	scanf("%d",&x);
	
	printf("Enter the value of Y:");
	scanf("%d",&y);
	
	ans = (x*x) - (2*x*y) + (y*y);
	
	printf("The ans is: %d",ans);
}
