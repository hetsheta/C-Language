#include<stdio.h>

int main()
{
	int i=1;
	int n,sum=0;
	
	printf("Enter the number:");
	scanf("%d",&n);
	do{
		
	sum = sum + i;
	
	i++;
	}
	while(i<=n);
	printf("Sum : %d\n",sum);
	return 0;
}

