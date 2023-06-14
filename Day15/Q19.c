#include <stdio.h>

int main() {
    int n = 1;
    int rows = 5;
    int i,j;

    for (i=1; i<=rows; i++) {
    	
        for (j=1; j<=i; j++) {
        	
            printf("%d ",n);
            n++;
        }
        printf("\n");
    }

    return 0;
}
