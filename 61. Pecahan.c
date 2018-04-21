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
    char tanda;
     int pembilang1,pembilang2;
     int fpb_pembagi1,fpb_pembagi2,fpb_pembagi3,fpb_pembagi4;
    scanf("(%c %d/%u %d/%u)",&tanda, &x.pembilang , &x.penyebut, &y.pembilang, &y.penyebut);
    kpk=((x.penyebut*y.penyebut)/(fpb(x.penyebut, y.penyebut)));
    pembilang1=x.pembilang*(kpk/x.penyebut)+y.pembilang*(kpk/y.penyebut);
    pembilang2=x.pembilang*(kpk/x.penyebut)-y.pembilang*(kpk/y.penyebut);
    fpb_pembagi1=fpb((abs(pembilang1)),kpk);
    fpb_pembagi2=fpb((abs(pembilang2)),kpk);
    fpb_pembagi3=fpb((abs(x.pembilang*y.pembilang)),(abs(x.penyebut*y.penyebut)));
    fpb_pembagi4=fpb((abs(x.pembilang*y.penyebut)),(abs(x.penyebut*y.pembilang)));
    if(tanda=='+'){
		if(x.penyebut!=y.penyebut){
         
        printf("%d/%u\n", pembilang1/fpb_pembagi1,kpk/fpb_pembagi1);}
    else if(x.penyebut==y.penyebut){
         
        if(x.penyebut/fpb(x.penyebut, y.penyebut)==1){
            printf("%d\n", (x.pembilang+y.pembilang)/fpb_pembagi1);
        }
        else{
            printf("%d/%u\n", (x.pembilang+y.pembilang)/fpb_pembagi1,x.penyebut/fpb_pembagi1);
        }}
    }
    else if(tanda=='-'){
		if(x.penyebut!=y.penyebut){
			printf("%d/%u\n", pembilang2/fpb_pembagi2,kpk/fpb_pembagi2);}
		else if(x.penyebut==y.penyebut){
			if(x.penyebut/fpb(x.penyebut, y.penyebut)==1){
				printf("%d\n", (x.pembilang-y.pembilang)/fpb_pembagi2);
			}
			else{
				printf("%d/%u\n", (x.pembilang-y.pembilang)/fpb_pembagi2,x.penyebut/fpb_pembagi2);
			}
        }
	}
	else if(tanda=='*'){
		if((x.penyebut*y.penyebut)/fpb_pembagi3==1){
			printf("%d\n", (x.pembilang*y.pembilang)/fpb_pembagi3);
		}
		else{
			printf("%d/%u\n", (x.pembilang*y.pembilang)/fpb_pembagi3, (x.penyebut*y.penyebut)/fpb_pembagi3);
		}
	}
	else if(tanda=='/'){
		if((x.penyebut*y.pembilang)/fpb_pembagi4==1){
			printf("%d\n", (x.pembilang*y.penyebut)/fpb_pembagi4);
		}
		else{
			printf("%d/%u\n", (x.pembilang/y.penyebut)/fpb_pembagi4, (x.penyebut/y.pembilang)/fpb_pembagi4);
		}
	}
		
    
    
 return 0;
}
