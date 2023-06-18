#include <stdio.h>
int main() {
    int i,n,num[100];
	float sum = 0;
	float avg;

    printf("Enter the numbers of elements: ");
    scanf("%d",&n);

    while (n>100 || n<1) {
        printf("Invalid Input! Enter again: ");
        scanf("%d",&n);
    }

    for (i=0 ; i<n ; i++) {
        printf("Enter Elements [%d] : ", i);
        scanf("%d",&num[i]);
        sum=sum+num[i];
    }
	avg =sum/n;
    printf("Average = %.2f", avg);
    return 0;
}
