#include <stdio.h>
#define SIZE 600
 
int main(){
    int m,i,j,a[SIZE][SIZE],genap=0,ganjil=0;
    scanf("%d", &m);
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            scanf("%d", &a[i][j]);}}
    
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            
            if(j==i) {
				if(a[i][j]%2==0){printf("genap");
						genap=genap+a[i][j];}
				else {printf("ganjil");
						ganjil=ganjil+a[i][j];}
					}
			else {printf("%d", a[i][j]);}
            if(j==m-1) {printf("\n");}
            else {printf("\t");}
        }
    }
    printf("\n");
    printf("Penjumlahan elemen ganjil:%d\n", ganjil);
    printf("Penjumlahan elemen genap:%d\n", genap);
   
    return 0;
    }
