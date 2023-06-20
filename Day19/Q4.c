#include<stdio.h>

int main(){

     int m,n,i,j;
     
     printf("Enter the number of elements in row: ");
     scanf("%d",&m);
     
     printf("Enter the number of elements in column: ");
     scanf("%d",&n);
     
    int a[m][n],b[m][n],c[m][n];
     
    printf("\nEnter element of first matrix: \n ");
	     for(i=0;i<m;i++){
	         
		       for(j=0;j<n;j++){
			
			printf("Enter number [%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
	
		}
	}
	printf("\nEnter element of second matrix: \n");
		for(i=0;i<m;i++){
		    
		    for(j=0;j<n;j++){
		        
			printf("Enter number [%d][%d] :",i,j);
			scanf("%d",&b[i][j]);
			}
	}
	
		for(i=0;i<m;i++){
		    
	    	for(j=0;j<n;j++){
	    	    
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	
	printf("Sum of matrices: \n");
	for(i=0;i<m;i++){
	    
		for(j=0;j<n;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
		return 0;
}