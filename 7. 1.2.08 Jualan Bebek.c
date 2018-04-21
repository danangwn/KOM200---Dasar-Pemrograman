#include <stdio.h>

int main(){
	
	int a,b,c,d;
	float e,f,tot;
	scanf("%d %d %d %d %f %f", &a, &b, &c, &d, &e, &f);
	tot=(a*e)+(b*(e+f))+(c*(e+(f*2)))+(d*(e+(f*3)));
	printf("%.2f", tot);
	return 0;
}
