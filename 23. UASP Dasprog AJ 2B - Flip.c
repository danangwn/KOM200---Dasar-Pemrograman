#include <stdio.h>
#define SIZE 1000

int main(){
	int m,n,i,j,a[SIZE][SIZE];
	scanf("%d %d", &m, &n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d", &a[i][j]);}}
	for(i=m-1;i>=0;i--){
		for(j=0;j<n;j++){
			printf("%d", a[i][j]);
			if(j==n-1) printf("\n");
			else printf(" ");
		}}
	return 0;
	}

