#include<stdio.h>

int main()
{
	int a,b,c,d,e,max;
	
	printf("Enter A:");
	scanf("%d",&a);
	printf("Enter B:");
	scanf("%d",&b);
	printf("Enter C:");
	scanf("%d",&c);
	printf("Enter D:");
	scanf("%d",&d);
	printf("Enter E:");
	scanf("%d",&e);
	
	max = (a>b && a>c && a>d && a>e) ? a : ((b>c && b>d && b>e) ? b : ((c>d && c>e) ? c: (d>e) ? d : e));
	
	printf("The max number is %d",max);
	return 0;
}
