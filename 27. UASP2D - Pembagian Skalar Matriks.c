#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int main(){
	int m,n,i,j,a[SIZE][SIZE],x;
	
	scanf("%d %d", &n, &m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		scanf("%d", &a[i][j]);
	}
	}
	scanf("%d", &x);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		;
		printf("%.2f", (float)(a[i][j])/x);
		if(j==m-1) printf("\n");
		else printf(" ");
	}
}
	return 0;
}
