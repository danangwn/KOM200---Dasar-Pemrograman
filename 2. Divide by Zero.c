#include <stdio.h>
int main(){
	long long int a, b, c, d; 
	double e, f;
	
	scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
	
		if(b==0){
			printf("Divide by Zero\n");}
		else {e=(double) a/b; printf("%.2lf\n", e);}
	
	
		if(d==0){
			printf("Divide by Zero\n");
		}
		else {f=(double) c/d; printf("%.2lf\n", f);}
	
return 0;	
}
