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
	
	ans = (x*x*x) + ((3*x*y)*(x+y)) + (y*y*y);
	
	printf("The ans is: %d",ans);
}
