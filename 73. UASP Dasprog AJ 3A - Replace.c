#include <stdio.h>
#include <string.h>
#define size 101
 
int main(){
    char kata1[size],kata2[size],cek[size];
   
	scanf("%s %s", &kata1, &kata2);
	scanf("%s", &cek);
    while(strcmp(cek,"99")){
        
        
        if(!strcmp(kata1,cek)) printf("%s\n", kata2);
        else printf("%s\n", cek);
      scanf("%s", &cek);
      
      
    }
         
    
        return 0;
 
 
}
