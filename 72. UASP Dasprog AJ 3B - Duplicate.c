#include <stdio.h>
#include <string.h>
#define size 101
 
int main(){
    char kata[size],cek[size];
    int true;
	gets(kata);
	scanf("%s", &cek);
    while(true){
        
        if(!strcmp(cek,"99")) break;
        if(!strcmp(kata,cek)) printf("%s-%s\n", cek,cek);
        else printf("%s\n", cek);
      scanf("%s", &cek);
      
      
    }
         
    
        return 0;
 
 
}
