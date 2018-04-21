#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c,max=0,e=0;
    scanf("%d", &a);
    while(a!=-99){
    scanf("%d",&b);
    c=abs(a-b);  
        if(c>max) max=c;
    e++;
    scanf("%d", &a);
}
printf("%d %d\n", e, max);
return 0;
} 
