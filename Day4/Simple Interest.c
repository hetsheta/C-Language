#include<stdio.h>

int main()
{
	int p,t;
	float s,r;
printf("Enter the principle value:");
scanf("%d",&p);
printf("Enter the rate of interest:");
scanf("%.2f",&r);
printf("Enter the time duration:");
scanf("%d",&t);

printf("Simple Interest: %.2f",s=p*r*t/100);
return 0;

}
