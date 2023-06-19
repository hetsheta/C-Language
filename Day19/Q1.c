#include<stdio.h>  
int main(){
	  
int i,j,m,n; 
   
printf("Enter number of elements in row:");
scanf("%d",&m);
printf("Enter number of elements in column:");
scanf("%d",&n);

int a[m][n];
    
	for(i=0 ; i<m ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			printf("Enter elements [%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0 ; i<m ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
		
return 0;  
}    
