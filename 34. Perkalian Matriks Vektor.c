#include <stdio.h>
#define SIZE 400
int main(){

int a[SIZE][SIZE],b[SIZE],i,j,m,c[SIZE]={0};
scanf("%d", &m);
for(i=0;i<m;i++){
	for(j=0;j<m;j++) scanf("%d", &a[i][j]);
	}
for(j=0;j<m;j++) scanf("%d", &b[j]);

for(i=0;i<m;i++)
	for(j=0;j<m;j++){
		c[i]=c[i]+a[i][j]*b[j];}
for(i=0;i<m;i++)
		printf("%d\n", c[i]);
		
		
return 0;
}
