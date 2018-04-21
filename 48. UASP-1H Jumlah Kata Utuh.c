#include <stdio.h>
#include <string.h>
#define size 100

int main(){
	char kata[size],c,cek[size];
	int con=0, true;
	gets(kata);
	while(true){
		scanf("%s", &cek);
		if(!strcmp(kata,cek)) con++;
		scanf("%c", &c);
		if(c=='\n') break;
	}
		
		printf("%d\n", con);
		return 0;


}
