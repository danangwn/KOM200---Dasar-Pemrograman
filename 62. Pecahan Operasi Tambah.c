#include <stdio.h>
#include <stdlib.h>

 
int fpb(int a,int b){
    if(b==0) return a;
    else return fpb(b,a%b);
}
 
typedef struct {
    int pembilang;
    unsigned int penyebut;
} pecahan_n;
 
int main(){
    pecahan_n x, y;
    unsigned int kpk;
    
     int pembilang1;
     int fpb_pembagi;
    scanf("(+ %d/%u %d/%u)",&x.pembilang , &x.penyebut, &y.pembilang, &y.penyebut);
    kpk=((x.penyebut*y.penyebut)/(fpb(x.penyebut, y.penyebut)));
    pembilang1=x.pembilang*(kpk/x.penyebut)+y.pembilang*(kpk/y.penyebut);
    fpb_pembagi=fpb((abs(pembilang1)),kpk);
    
    
    
    if(x.penyebut!=y.penyebut){
         
        printf("%d/%u\n", pembilang1/fpb_pembagi,kpk/fpb_pembagi);
    }
    else if(x.penyebut==y.penyebut){
         
        if(x.penyebut/fpb(x.penyebut, y.penyebut)==1){
            printf("%d\n", (x.pembilang+y.pembilang)/fpb_pembagi);
        }
        else{
            printf("%d/%u\n", (x.pembilang+y.pembilang)/fpb_pembagi,x.penyebut/fpb_pembagi);
        }
    }
 return 0;
}
