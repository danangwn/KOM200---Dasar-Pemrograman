#include <stdio.h>
int main(){
	int h1,h2,m1,m2,s1,s2,selisih;
	
	scanf("%d %d %d %d %d %d", &h1, &m1, &s1, &h2, &m2, &s2);
	selisih=((h2-h1)*3600)+((m2-m1)*60)+(s2-s1);
	printf("%d", selisih);
	return 0;
}
