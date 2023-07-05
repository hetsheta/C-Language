#include<stdio.h>

void len(char arr[]){
		int i;
		
		for(i=0;arr[i]!='\0';i++){
		    
		}
		printf("Length : %d",i);
	}

int main(){
	
	char arr[100];
	
	printf("Enter the Value [%d] : ");
	scanf("%s",&arr);
	
	len(arr);
	
	return 0;
}