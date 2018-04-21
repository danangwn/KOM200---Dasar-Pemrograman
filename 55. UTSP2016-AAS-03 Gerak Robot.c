#include <stdio.h>

int main(){
	
	int n, x=0,y=0,j,i,kali;
	char kode;
	scanf("%d", &kali);
	for(i=0;i<kali;i++){
		for(j=0;j<2;j++){
	scanf("%c %d", &kode, &n);
	if(kode=='A'||kode=='a') y=y+n;
	else if(kode=='I'||kode=='i') x=x-n;
	else if(kode=='B'||kode=='b') y=y-n;
	else if(kode=='K'||kode=='k') x=x+n;
}
}
	printf("%d %d\n",x ,y);
	return 0;
	
	}
