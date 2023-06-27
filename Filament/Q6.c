#include<stdio.h>
#include<string.h>

int main(){
	char a[100];
	printf("Enter String : ");
	scanf("%s",a);
	
		printf("The upper case is: %s",strupr(a));
	return 0;
}
