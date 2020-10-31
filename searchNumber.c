#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
	int vetor[1000],i,n,b;
	while(vetor[0]!=-1){
		b=0;
		scanf("%d\n", &vetor[0]);
		if(vetor[0]!=-1){
		    for(i=1;i<1000;i++){
		    	scanf("%d\n", &vetor[i]);
		    }
		    scanf("%d",&n);
		    for(i=0; i < 1000; ++i){
		    	if(vetor[i]==n){
		    		b = b+1;
		    	}
		    }
		    printf("%d appeared %d times\n",n,b);
	    }
	}
	return 0;
}
