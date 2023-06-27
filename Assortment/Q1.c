#include<stdio.h>

int main()
{
	int i,n;
	
	printf("Enter length of array: ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0 ; i<n ; i++){
		printf("Enter elements[%d]: ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0 ; i<n ; i++){
		if(a[i]<0){
			printf("%d\t",a[i]);
			
		}
	}
	return 0;
}
