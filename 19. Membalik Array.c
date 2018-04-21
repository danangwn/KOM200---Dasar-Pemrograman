#include <stdio.h>

#define SIZE 1000

int main(){
	int m,i,a[SIZE];
	scanf("%d", &m);
	for(i=0;i<m;i++){
			scanf("%d", &a[i]);}
	for(i=m-1;i>=0;i--){
			printf("%d ", a[i]);
		}
	return 0;
	}

