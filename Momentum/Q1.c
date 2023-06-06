#include<stdio.h>

int main()
{
	char value;
	
	printf("Enter the character:");
	scanf("%c",&value);
	
	if(value>='a' && value<='z'){
		printf("The input is alphabet");
	}
	else if(value>='A' && value<='Z'){
		printf("The input is alphabet");
	}
	else if(value>='0' && value<='9'){
		printf("The input is digit");
	}
	else{
		printf("The input is special character");
	}
	return 0;
	
}
