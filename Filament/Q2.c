#include<stdio.h>
#include<string.h>

int main(){
	
	char n[10],i;
	
	printf("Enter String : ");
	scanf("%s",n);
	
	for(i=1 ; i<strlen(n) ; i++){
		
		if(n[i]>='a' && n[i]<='z'){
			n[i]-=32;
		}
		else if(n[i]>='A' && n[i]<='Z'){
			n[i]+=32;
		}
	}
		printf("%s",n);
	
	return 0;
}
