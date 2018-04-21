#include <stdio.h>
#define SIZE 1000

int main(){
	int m,n,i,j,a[SIZE][SIZE];
	scanf("%d %d", &m, &n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d", &a[i][j]);}}
	for(i=0;i<m;i++){
		for(j=n-1;j>=0;j--){
			printf("%d", a[i][j]);
			if(j==0) printf("\n");
			else printf(" ");
		}}
	return 0;
	}

