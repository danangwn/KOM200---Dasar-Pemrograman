#include <stdio.h>
#define size 100

int main(){
	
	int mat[size][size], mat2[size][size], n, i,j;
	
	scanf("%d", &n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d", &mat[i][j]);}
		}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j||(n-i-1)==j) mat2[i][j]=mat[i][n-j-1];
			else mat2[i][j]=mat[i][j];
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d", mat2[i][j]);
			if(j==n-1) printf("\n");
			else printf(" ");
		}
	}
	return 0;
				
	
	}
