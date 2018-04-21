#include <stdio.h>
#define SIZE 100

int main(){
	int a[SIZE][SIZE],b[SIZE][SIZE],m,n,bar1,bar2,i,j;
	scanf("%d %d %d %d", &m, &n, &bar1, &bar2);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){ scanf("%d", &a[i][j]);
			b[i][j]=a[i][j];}
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){ 
			if(i==bar1-1) {a[i][j]=b[bar2-1][j];}	
			else if(i==bar2-1) {a[i][j]=b[bar1-1][j];}
}}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d", a[i][j]);
			if(j==n-1) printf("\n");
			else printf(" ");
		}}
return 0;
	


}
