#include <stdio.h>
#include <ctype.h>

int main(){
	char a;
	int nonalpha=0;
	int i;

	scanf("%c", &a);
	for (i=0; a!='\n'; i++){
		
		if(isalpha(a)==0){ nonalpha++;
		
		}
		
		scanf("%c", &a);
	}
	if(nonalpha==0) printf("Tidak ada karakter selain alfabet\n");
	else printf("%d\n", nonalpha);
	
	return 0;
	
	
	}
