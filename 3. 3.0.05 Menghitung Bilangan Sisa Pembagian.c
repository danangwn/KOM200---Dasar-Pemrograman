#include <stdio.h>
 
int main (){
    int x,a,b,c,plus=0; //declare x,a,b,c,plus(counter)
    scanf("%d", &x);    //baca x untuk looping
    for(;x>0;x--){      //looping sebanyak x
        scanf("%d %d %d", &a, &b, &c);  //baca a,b,c
        if(a>0 && b>0){     //cek a dan b > 0
            if(c==a%b){     //cek c apakah sama dengan a mod b
                plus++;}    //jika benar tambah 1
            else plus+=0;   //jika salah tambah 0
            }
        }
    printf("%d\n", plus);   //cetak plus(counter)
    return 0;
}
