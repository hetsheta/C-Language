#include <stdio.h>

int main() {
	
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    int length = sizeof(a) / sizeof(a[0]);

    printf("Length of the array: %d\n", length);

    return 0;
}
