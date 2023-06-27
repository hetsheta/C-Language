#include<stdio.h>

int main(){
	
	char a;
	printf("Enter Character : ");
	scanf("%c",&a);
	
	if(a >='A' && a <='Z'){
     	a+=32;	
	}
		printf("%c",a);
	return 0;
}
