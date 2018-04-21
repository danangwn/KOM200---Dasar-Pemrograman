#include <stdio.h>


int main(){
	int type, n,disc1,disc2;
	int total, totalharga, hargadisc, totaldisc=0;
	
	scanf("%d", &type);
	scanf("%d", &n);
	if(type==1){disc1=10;}
	else if(type==2){disc1=20;}
	else disc1=0;
	if(n>=10) {disc2=10;}
	else disc2=0;
	total=n*10000;
	totaldisc=disc1+disc2;
	hargadisc=(total*totaldisc)/100;
	totalharga=total-hargadisc;
	
	printf("%d\n%d\n%d\n", total, hargadisc, totalharga);
	
	return 0;
	
	}
