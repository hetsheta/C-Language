#include<stdio.h>

int main()
{

    int n,ld,sum;
    
    printf("Enter the number: ");
    scanf("%d",&n);
    
    ld = n%10;
    
    while(n>9)
    {
        n=n/10;
    }
    
    sum=ld+n;
    
    printf("Sum : %d",sum);

    return 0;
}