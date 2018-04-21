#include <stdio.h>

int main(){
	int mat[1001][1001];
	int i,j;
	int n;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d", &mat[i][j]);
		}
	
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i<=j) printf("0");
			else printf("%d", mat[i][j]+mat[j][i]);
			if(j==n-1) printf("\n");
			else printf(" ");
		}
	}
	return 0;
	
	}
