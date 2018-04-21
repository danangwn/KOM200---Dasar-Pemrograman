#include <stdio.h>
#define sz 500000
int main(){
	int n,a,b[sz];
	int i,j,y=0,x=0;
	
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		scanf("%d", &a);
	
	if(a>=0)  x++;
	else {b[y]=a; 
y++;}
	}
	printf("%d\n", x);
	for(j=0;j<y;j++){
		printf("%d\n", b[j]);}
	return 0;
	
	}
