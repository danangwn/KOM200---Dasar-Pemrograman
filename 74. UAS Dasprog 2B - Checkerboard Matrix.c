#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j) printf("0");
			else if((abs(i-j))%2==0) printf("0");
			
			
			else printf("1");
			if(j==n-1) printf("\n");
			else printf(" ");
		}
	}
	return 0;
	
	}
