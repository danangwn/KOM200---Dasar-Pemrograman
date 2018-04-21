#include <stdio.h>

int main(){
int a,b,m=0,n=0;
float c;
scanf("%d", &a);
while(a!=-99){
scanf("%d %f", &b, &c);
m++;
if(c==(float)a/b)
n++;
scanf("%d", &a);
}
printf("%d %d\n", m, n);
return 0;
}
