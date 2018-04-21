#include <stdio.h>
#define size 1000

int main(){
	char ch[size],ch2;
	char ch1;
	int i=0,x=0,j, b[size],p=0;
	scanf("%c", &ch2);
	while(ch2!='\n'){
		
		ch[i]=ch2;
		i++;
		scanf("%c", &ch2);
		
	}
	scanf("%c", &ch1);
	for(j=0;j<=i;j++){
		if(ch[j]==ch1) {x++; 
		b[p]=j; p++;}
		
		
		
	}
	if(x==0) printf("Karakter Tidak Ditemukan\n");
	else printf("%d\n", x);
	
	for(j=0;j<p;j++)
	{ printf("%d", b[j]);
	  if(j==p-1) printf("\n");
	  else printf(" ");
	  }
	
	
	
	
	return 0 ;
	
	
	
	}
