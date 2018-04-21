#include <stdio.h>
 
 int main(){
 
	int m,i,j;
	char c1,c2,c3;
	scanf("%d\n", &m);
	scanf("%c%c%c", &c1, &c2, &c3);
	for(i=1;i<=m;i++){
		for(j=1;j<=i;j++){
			if(j==1 && i<m) printf("%c", c1);
			else if(i==m && j<i) printf("%c", c2);
			else if(j>1 && j==i) printf("%c", c3);
			else printf(" ");
	}
	
	printf("\n");
}
	return 0;
	
 
 }
