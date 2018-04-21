#include <stdio.h>
int main(){
	int a,b,c;
	float a1,b1,c1,tax,tot, toti,totu;
	scanf("%d %f %d %f %d %f %f", &a, &a1, &b, &b1, &c, &c1, &tax);
	tot=(a*a1)+(b*b1)+(c*c1);
	toti=tot*(tax/100);
	totu=tot-toti;
	printf("%.2f %.2f\n", toti,totu);
	return 0;
}

