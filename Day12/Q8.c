#include<stdio.h>

int main()
{
	int i=1;
	int n,sum=0;
	
	printf("Enter the number:");
	scanf("%d",&n);
	while(i<=n){
		
	sum = sum + i;
	
	i++;
	}
	printf("Sum : %d\n",sum);
	return 0;
}
