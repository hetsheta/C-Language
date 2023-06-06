#include<stdio.h>

int main()
{
	int a;
	
	printf("Enter the number:");
	scanf("%d",&a);
	
	a%2==0 ? printf("The input is even") : printf("The input is odd");
	
	return 0;
	
	
}
