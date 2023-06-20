#include <stdio.h>

int main() 
{
    int m,n;
    
    printf("Enter the number of elements of row: ");
    scanf("%d",&m);
    
    printf("Enter the number of elements of Column: ");
    scanf("%d",&n);
    
    int a[m][n];

    int length = sizeof(a) / sizeof(a[0][0]);

    printf("Length of 2D array: %d\n", length);

    return 0;
}