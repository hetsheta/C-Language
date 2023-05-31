#include<stdio.h>

int main()
{
	int a;
	int b;
	
	printf("Enter the number A: ");
	scanf("%d",&a);
	printf("Enter the number B: ");
	scanf("%d",&b);
	
	if(a<b){
		printf("A is minimum");
	}
	else{
		printf("B is minimum");
	}
	return 0;
}
