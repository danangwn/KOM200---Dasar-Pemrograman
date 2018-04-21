#include <stdio.h>
#include <string.h>
#define size 10000
 
struct balok {
   double panjang;
   double lebar;
   double tinggi;
};
typedef struct balok BALOK;
 
int main(){
    int n, i, x;
     
    double ratvol=0,jum=0;
    BALOK data[size];
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%lf %lf %lf", &data[i].panjang ,&data[i].lebar, &data[i].tinggi);
   
    }
    scanf("%d",&x);
    while(x!=-9){
        
            ratvol+=(data[x-1].panjang*data[x-1].lebar*data[x-1].tinggi); jum++;
            scanf("%d",&x);
         
    }
     
     
     
    printf("%.4lf\n", ratvol/jum);
     
    return 0;
    }
