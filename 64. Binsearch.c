#include <stdio.h>


int main(){
	int a[100],i,n;
	int left, right,x,mid;
	
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	scanf("%d", &x);
	left=0; right=n-1;
	while(left<=right){
		mid=(left+right)/2;
		if(x<a[mid]){
			right=mid-1;}
		else if(x>a[mid]){
			left=mid+1;}
		else{
			printf("%d\n", mid);
			return 0;
			}
		}
	printf("-1\n");
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
