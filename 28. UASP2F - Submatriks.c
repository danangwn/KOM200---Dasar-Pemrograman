#include <stdio.h>
#define SIZE 1000
 
int main(){
    int m,n,i,j,a[SIZE][SIZE],q,w,e,r;
    scanf("%d %d", &m, &n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d", &a[i][j]);}}
    scanf("%d %d %d %d", &q, &w, &e, &r);
    for(i=q;i<=w;i++){
        for(j=e;j<=r;j++){
            printf("%d", a[i][j]);
            if(j==r) printf("\n");
            else printf(" ");
        }}
    return 0;
    }
