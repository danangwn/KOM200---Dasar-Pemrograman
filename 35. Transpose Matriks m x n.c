#include <stdio.h>
#define SIZE 100
int main(){ 
int a[SIZE][SIZE], i,j,m,n;
scanf("%d %d", &m, &n);
for(i=0;i<m;i++){
	for(j=0;j<n;j++) scanf("%d", &a[i][j]);
	}
for(j=0;j<n;j++){
	for(i=0;i<m;i++){ printf("%d", a[i][j]);
	if(i==m-1) printf("\n");
	else printf(" ");}
	}
return 0;
}
