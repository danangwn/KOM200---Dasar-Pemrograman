#include <stdio.h>
#define SIZE 400
int main(){
    int a[SIZE], b[SIZE];
    int m,n,i;
    scanf("%d %d", &m, &n);
    for(i=0;i<m*n;i++) scanf("%d", &a[i]);
    for(i=0;i<m*n;i++) scanf("%d", &b[i]);
    for(i=0;i<m*n;i++) {
        printf("%d", a[i]+b[i]);
        if((i+1)%n==0) printf("\n");
        else printf(" ");}
        return 0;
}
