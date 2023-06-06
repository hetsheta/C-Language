#include<stdio.h>

int main()
{
	int a,b,c,d,max;
	
	printf("Enter A:");
	scanf("%d",&a);
	printf("Enter B:");
	scanf("%d",&b);
	printf("Enter C:");
	scanf("%d",&c);
	printf("Enter D:");
	scanf("%d",&d);
	
	max = (a>b && a>c && a>d) ? a : ((b>c && b>d) ? b : (c>d) ? c: d);
	
	printf("The max number is %d",max);
	return 0;
}
