#include<stdio.h>
#include<string.h>

int main(){
	
	char b[10],i;
	
	printf("Enter String :");
	scanf("%s",&b);
	
	if(b[0]>='a' && b[0]<='z'){
		b[0]-=32;
	}
	for(i=1 ; i<strlen(b) ; i++){
		if(b[i]>='A' && b[i]<='Z'){
		b[i]+=32;
	}
}
     printf("%s",b);
     
	return 0;
}
