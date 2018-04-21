#include <stdio.h>
#define SIZE 100

int main(){
	int n,i,a[SIZE],b[SIZE];
	
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d", &b[i]);
	}
	for(i=0;i<n;i++){
		printf("%d", a[i]+b[i]);
		if(i==n-1) printf("\n");
		else printf(" ");
	}
	return 0;
}
