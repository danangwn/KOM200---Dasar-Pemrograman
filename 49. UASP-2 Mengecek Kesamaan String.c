#include <stdio.h>
#include <string.h>


int main(){
	char str[1001], str1[1001],ch,ch1;
	int i,con=0,N;
	gets(str);
	gets(str1);
	N=strlen(str);
	ch='0';
	for(i=0;ch!='\0';i++){
		ch=toupper(str[i]);
		ch1=toupper(str1[i]);
		if(ch!=ch1){
			con++;
		}
	}
	if(con==0) printf("%s\n", str);
	else printf("%d\n", con);
	return 0;
}
