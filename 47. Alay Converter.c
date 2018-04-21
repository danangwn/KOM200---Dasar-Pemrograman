#include <stdio.h>
#include <stdlib.h>

int main(){
	char *a; 
	int i,con=1;
	a=(char*)malloc((con)*sizeof(char));
	scanf("%c", &a[con]);
    while (a[con]!='\n'){
		con++;
		a=(char*)realloc(a,(con)*sizeof(char));
		scanf("%c", &a[con]);
	}
	for(i=1;i<=con-1;i++){
		if(a[i]=='i'||a[i]=='I') a[i]='1';
		if(a[i]=='e'||a[i]=='E') a[i]='3';
		if(a[i]=='a'||a[i]=='A') a[i]='4';
		if(a[i]=='g'||a[i]=='G') a[i]='9';	
	}
	for(i=1;i<=con-1;i++){
		printf("%c", a[i]);}
	printf("\n");
	free(a);
	return 0;
	
	
	}
