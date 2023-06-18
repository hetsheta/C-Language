#include<stdio.h>

int main()
{
    int i,n;
    printf("Enter the size of array:\t");
    scanf("%d",&n);
    
    int a[n],b[n],c[n];
    
    for(i=0;i<n;i++)
    {
    	printf("Enter elements a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
    	printf("Enter elements b[%d] :",i);
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
    }
    printf("\nSum of these two array is :");
    for(i=0;i<n;i++)
    {
        printf(" %d",c[i]);
    }
    return 0;
}
