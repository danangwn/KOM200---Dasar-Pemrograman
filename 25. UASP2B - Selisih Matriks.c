#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int main(){
	int m,n,i,j,a[SIZE][SIZE],b[SIZE][SIZE];
	
	scanf("%d %d", &n, &m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		scanf("%d", &a[i][j]);
	}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		scanf("%d", &b[i][j]);
	}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		printf("%d", abs(a[i][j]-b[i][j]));
		if(j==m-1) printf("\n");
		else printf(" ");
	}
}
	return 0;
}
