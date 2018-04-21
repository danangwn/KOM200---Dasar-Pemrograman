#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char ch[100],space;
	int kap=0,nonkap=0,i,intch;
	
	
	while(space!='\n'){
		scanf("%s", ch);
		scanf("%c", &space);
		for(i=0;i<strlen(ch);i++){
			intch=ch[i];
		if(intch>=65&&intch<=90){
			kap++;
		}
		else if(intch>=97&&intch<=122){
			nonkap++;
		}
	}	
	}
	printf("%d\n", kap);
	printf("%d\n", nonkap);
	if(kap>nonkap){
		printf("Kapital Lebih Banyak\n");
	}
	else if(kap<nonkap){
		printf("Nonkapital Lebih Banyak\n");
	}
	else printf("Sama Banyak\n");


return 0;
}
