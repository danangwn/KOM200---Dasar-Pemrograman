#include <stdio.h>
#define SIZE 400
int main(){
	int m,n,a[SIZE][SIZE], i, j, x;
	scanf("%d %d", &m, &n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++){scanf("%d", &a[i][j]);
		}
		scanf("%d", &x);
		for(i=0;i<m;i++){
			printf("%d\n", a[i][x]);
		}
		return 0;
	}
