#include<stdio.h>

int main()
{
	
	int x;
	int y;
	int z,max;
	
	printf("Enter the value of X:");
	scanf("%d",&x);
	printf("Enter the value of Y:");
	scanf("%d",&y);
	printf("Enter the value of Z:");
	scanf("%d",&z);

	max = x>y ? x>z ? x:z : y>z ? y:z ;
	
	printf("The max number is %d",max);
	return 0;
}
