#include <stdio.h>


int main(){
	int m,n,i,a,sum=0;
	float rataan;
	
	scanf("%d %d", &n, &m);
	for(i=0;i<n*m;i++)
		{
		scanf("%d", &a);
		sum=sum+a;
		
		if((i+1)%m==0) {rataan=(float)sum/m;
		printf("%.2f\n", rataan);
		sum=0;}
	}
	return 0;
}

