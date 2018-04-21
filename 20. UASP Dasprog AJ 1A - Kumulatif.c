#include <stdio.h>
#define SIZE 100001
int main(){
	int a[SIZE],i,n,k,total=0;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);}
		scanf("%d", &k);
	for(i=0;i<k;i++){
		total=total+a[i];
		
	
	}
	printf("%d", total);
	printf("\n");
return 0;
}
