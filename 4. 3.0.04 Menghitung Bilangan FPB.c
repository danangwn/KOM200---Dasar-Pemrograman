#include <stdio.h>
int fpb(int a,int b){
	if(b==0) return a;
	else return fpb(b,a%b);
}

int main(){
	int a,b,c,d=0,e=0;
	scanf("%d", &a);
	while(a!=-99){
			scanf("%d %d",&b, &c);
		if(a>=0&&b>=0&&c>=0){	
		if(c==fpb(a,b)){e++;}
		e+=0;}
	d++;
	scanf("%d", &a);
}
printf("%d %d\n", d, e);
return 0;
}	
