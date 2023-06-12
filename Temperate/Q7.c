#include<stdio.h>

int main()
{
    int i,n,ft=0,st=1,nt;
    
    nt=ft+st;
    
    printf("Enter the number of terms:");
    scanf("%d",&n);
    
    printf("Fibonacci series : %d, %d, ",ft, st);
    
    for(i=3 ; i<=n ; i++)
    {
        printf("%d, ",nt);
    ft=st;
    st=nt;
    nt = ft + st;
    }
    
    return 0;
}