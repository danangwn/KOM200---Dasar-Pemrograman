#include <stdio.h>

int main(){
	int m,n,o,p,a[21][21],b[21][21],i,j,x,k,l,ci,cj;
	scanf("%d %d", &m, &n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	scanf("%d %d", &o, &p);
	for(i=0;i<o;i++){
		for(j=0;j<p;j++){
			scanf("%d", &b[i][j]);
		}
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(a[i][j]==b[0][0]){
				x=0;
				for(k=i,ci=0;ci<o;k++,ci++){
					for(l=j,cj=0;cj<p;l++,cj++){
						if(a[k][l]==b[ci][cj]) x++;
						
					}
				}
				
			
			if(x==o*p){
					printf("%d %d\n", i, j);
					return 0;
		
		}		
		}
		}
		
	}
}
