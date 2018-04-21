#include <stdio.h>
#include <stdlib.h>
#define size 100001
int main(){
    int n,a[size], i,x;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        {
            scanf("%d", &a[i]);}
        }
    scanf("%d", &x);
    for(i=0;i<n-1;i++){
        {
         
        if(i==x-1) printf("%d\n", abs(a[i]-a[i+1]));
        }
    }
        return 0;
    }
