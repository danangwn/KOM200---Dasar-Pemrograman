#include <stdio.h>
#include <stdlib.h>
#define SIZE 201
 
int main(){
    int m,n,i,j,k=0,d,a[SIZE][SIZE],b[SIZE][SIZE],c[SIZE][SIZE];
    scanf("%d %d", &m, &n);
    d=n-1;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d", &a[i][j]);
            b[i][j]=a[i][j];}}
    
    
    
    for(i=0;i<m;i++){
        for(j=0;j<=n/2;j++){
			if(n%2!=0&&j==n/2){
            c[i][j]=a[i][j];}
            
            else{c[i][j]=abs(a[i][j]-b[k][d]);
				d=d-1;}}
			k=k+1;
			d=n-1;
		}
    for(i=0;i<m;i++){
        for(j=0;j<=n/2;j++){
            printf("%d", c[i][j]);
            if(j==n/2) printf("\n");
            else printf(" ");}
        }
    return 0;
    }
