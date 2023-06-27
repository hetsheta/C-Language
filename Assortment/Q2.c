#include <stdio.h> 

int main()
{
    int a[10], n, i, m1, m2, min;

    printf("Enter size of the array : ");
    scanf("%d", &n);
    
    for(i=0; i<n; i++)
    {
    	printf("Enter element [%d]: ",i);
        scanf("%d", &a[i]);
    }

    m1 = m2 = min;

    for(i=0; i<n; i++)
    {
        if(a[i] > m1)
        {
            
            m2 = m1;
            m1 = a[i];
        }
        else if(a[i] > m2 && a[i] < m1)
        {
            
            m2 = a[i];
        }
    }

    printf("Second largest number is : %d", m2);

    return 0;
}
