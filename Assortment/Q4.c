#include<stdio.h>

int main(){

    int i,j,m,n;
    
    printf("Enter the number of rows: ");
    scanf("%d",&m);
    printf("Enter the number of column: ");
    scanf("%d",&n);
    
    int a[m][n],b[m][n],c[m][n];
    
    printf("Enter element of first matrix: \n ");
	     for(i=0;i<m;i++){
	     	
		 	for(j=0;j<n;j++){
			
			printf("[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
	
			}
		}
	printf("\nEnter  element of second matrix: \n");
	 for(i=0;i<m;i++){
	     	
		 	for(j=0;j<n;j++){
			
			printf("[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
	
			}
		}

		for(i=0;i<m;i++){
			
			for(j=0;j<n;j++){
				
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\nSum of the matrices: \n ");
	for(i=0;i<m;i++){
		
		for(j=0;j<n;j++){
			
			printf("%d",c[i][j]);
		}
		printf("\n");
	}
		return 0;
}
	
