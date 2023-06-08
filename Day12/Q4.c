#include<stdio.h>

int main()
{
	int i=1;
	int n;
	
	printf("Enter the number:");
	scanf("%d",&n);
	
	while(n>=i)
	{	
		printf("%d\n",n);
		n--;
	}
	return 0;
}
