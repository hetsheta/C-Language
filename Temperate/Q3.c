#include<stdio.h>

int main()
{

    int n,count;
    
    printf("Enter the number: ");
    scanf("%d",&n);
    
    for(count=0 ; n!=0 ; count++)
    {
    n = n/10;
    
    }
    printf("The number of digits are : %d",count);

    return 0;
}