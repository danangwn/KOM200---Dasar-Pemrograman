#include <stdio.h>
#include <stdlib.h>
int main() {
int n, i, k;
int *a;
scanf("%d", &n);
a=(int *) malloc (n* sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);}
		for(k=0;k<2;k++){
			for(i=0;i<n;i++){
				printf("%d ", a[i]);}
				
				printf("\n");
				}
return 0;
}

