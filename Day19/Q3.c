#include<stdio.h>

int main(){
	int i,j,m,n;
	float average,sum=0;
	
	printf("Enter row :");
	scanf("%d",&m);
	
	printf("Enter column : ");
	scanf("%d",&n);
	
	int a[m][n],count;
	
	for(i=0;i<m;i++){
	    
		for(j=0;j<n;j++){
		
			printf("Enter elements [%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<m;i++){
	    
		for(j=0;j<n;j++){
		    
			sum=sum+a[i][j];
			count++;
		}
	}
	
	average = sum/count;
	printf("Average = %.2f",average);
	
	return 0;
}