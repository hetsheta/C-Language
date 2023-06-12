#include<stdio.h>

int main()
{

    int n,original,reverse,remainder;
    
    printf("Enter the number: ");
    scanf("%d",&n);
    
    original=n;
 
    while(n!=0){
        remainder=n%10;
        reverse=reverse * 10 + remainder;
        n=n/10;
    }
    
    if(original==reverse){
        printf("The number is palindrome");
    }
    else
    {
        printf("The number is not palindrome");
    }
    return 0;
}