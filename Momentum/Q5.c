#include<stdio.h>

int main()
{
	int units;
	float total,amount,surcharge;
	
	printf("Enter the units:");
	scanf("%d",&units);
	
	if(units<=50){
		amount= units*0.50;
	}
	else if(units<=150){
		amount= (units-50)*0.75 + 25;
	}
	else if(units<=250){
		amount= (units-150)*1.20 + 100;
	}
	else{
		amount= (units-250)*1.50 + 220;
	}
	
	surcharge= amount*0.20;
	total=amount+surcharge;
	
	printf("The total amount is %.2f",total);
	
	return 0;
	}
