#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y){
	int t=*x;
	*x=*y;
	*y=t;
}
	
	
	
	
int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	swap(&a, &b);
	printf("%d %d\n", a, b);
	return 0;
}
