#include<stdio.h>

int main()
{
	int i=1;
	int n,mul=1;
	
	printf("Enter the number:");
	scanf("%d",&n);
	
	while(i<=n){
		
	mul = mul * n;
	
	n--;
	}
	printf("Multiplication : %d\n",mul);
	return 0;
}
