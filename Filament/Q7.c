#include<stdio.h>
#include<string.h>

int main(){
	char a[100];
	printf("Enter String : ");
	scanf("%s",a);
	
		printf("The lower case is: %s",strlwr(a));
	return 0;
}
