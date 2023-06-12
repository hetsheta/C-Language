#include<stdio.h>

int main()
{

    int i,n,factorial=1;
    
    printf("Enter the number:");
    scanf("%d",&n);
    
    for(i=1 ; n>=i ; n--)
    {
        factorial = factorial * n;
    }
    printf("%d",factorial);
    return 0;
}