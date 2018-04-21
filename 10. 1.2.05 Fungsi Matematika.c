#include <stdio.h>
#include <math.h>
int main(){
	
	int a,b,c,d;
	float x1,x2;
	scanf("%d %d %d", &a, &b, &c);
	d=(b*b)-(4*a*c);
	x1=(-b*1.0+sqrt(d))/(2*a); x2=(-b*1.0-sqrt(d))/(2*a);
	printf("%.2f %.2f\n", x1, x2);
	return 0;
}
