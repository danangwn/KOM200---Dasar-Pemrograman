#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char ch[10][80];
	int i,j,n;
	
	scanf("%d\n", &n);
	for(i=0;i<n;i++){
	gets(ch[i]);
    for(j=0; j<strlen(ch[i]);j++){
			
		if(ch[i][j]=='a'||ch[i][j]=='i'||ch[i][j]=='u'||ch[i][j]=='e'||ch[i][j]=='o') printf("*");
		else if(ch[i][j]=='A'||ch[i][j]=='I'||ch[i][j]=='U'||ch[i][j]=='E'||ch[i][j]=='O') printf("*");
		else printf("%c", ch[i][j]);
		}
		printf("\n");
		}
		
	
	
	
return 0;
}
