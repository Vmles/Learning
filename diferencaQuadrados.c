#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    
    int i, k, a;
    scanf("%d", &i);
    while (i!=0){
    	k = (i - 1)/2;
    	a = k+1;
    	printf("%d - %d\n", a*a, k*k);
    	scanf("%d", &i);
	}
    
	return 0;
}


