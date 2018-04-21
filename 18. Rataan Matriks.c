#include <stdio.h>
int main(){
int a,b,c,i,j,k,x;
float rataan, jum=0;
scanf("%d %d %d", &a, &b, &c);
for(i=1;i<=a;i++){
    jum=0;
    for(j=1;j<=b;j++){
        for(k=1;k<=c;k++){
        scanf("%d", &x);
        jum+=x;
    }
}
    rataan=jum/(b*c);
    printf("Rataan matriks ke-%d: %.2f\n", i, rataan);
}   
return 0;   
}
