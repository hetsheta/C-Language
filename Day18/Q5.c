#include<stdio.h>

int main()
{
   int i,n;
   
   printf("Enter the number of elements: ");
   scanf("%d",&n);
   
   int a[n],b[n],c[2*n];

   for(i=0;i<n;i++){
   	printf("Enter Elements a[%d]: ",i);
   	scanf("%d",&a[i]);
   }
   
   for(i=0;i<n;i++){
   	printf("Enter Elements b[%d]: ",i);
    scanf("%d",&b[i]);
   }
  
  	printf("\nElements of Array After Merge: ");
   for(i=0;i<n;i++){
    c[i]=a[i];
    c[i+n]=b[i];
   }
   
   for(i=0;i<2*n;i++){
   printf(" %d",c[i]);
   }
	return 0;
 }
