#include<stdio.h>

int main()
{
	int i=1;
	int n,factorial=1;
	
	printf("Enter the number:");
	scanf("%d",&n);
	
	do{
		
	factorial = factorial * n;
	
	n--;
	}
	while(i<=n);
	printf("Factorial : %d\n",factorial);
	return 0;
}
