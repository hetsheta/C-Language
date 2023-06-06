#include<stdio.h>

int main()
{
	char a;
		printf("Enter the First Character of the day: ");
		scanf("%c",&a);
		
	switch(a){
		
		case 'M':
			printf("Monday");
			break;
		case 'T':
			printf("Tuesday");
			break;
		case 'W':
			printf("Wednesday");
			break;
		case 't':
			printf("Thursday");
			break;
		case 'F':
			printf("Friday");
			break;
		case 'S':
			printf("Saturday");
			break;
		case 's':
			printf("Sunday");
			break;
		default:
			printf("Invalid Selection!!");
			break;
	}
	
	
	return 0;
}
