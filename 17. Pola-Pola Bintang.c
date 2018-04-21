#include <stdio.h>
int main ()
{
    int i,j,k,x,a,m,tengah;
    scanf("%d", &m);
    while(a<m){
        scanf("%d %d", &a, &x);
        if(a==1){
            for(i=1;i<=x;i++)  //pola 1
            {
                for(j=1;j<=x;j++)
                {
                    if((i==1||i==x)||(j==1||j==x))
                    printf("*");
                    else printf(" ");
                }
                printf("\n");}
            }
        else if(a==2){
            for(i=1;i<=x;i++) //pola2
            {
                for(j=1;j<=x;j++)
                {
                    if((i+j)%2==0)
                    printf("*");
                    else if(j==x) printf("\n");
                    else printf(" ");
                }
                if ((i+x)%2==0) printf("\n");}
            }
        else if(a==3){
            int l=1, r=x;
             for (j=1; j<=x; j++){
                for (k=1; k<=x; k++){
                    if (k==l || k==r) printf("*");
                    else if (l<=r && k<r) printf(" ");
                    else if (l>r && k<l) printf(" ");
                }
            ++l; --r;
            printf("\n");
            }
        }
        else if(a==4){
            tengah=x/2+1;
            for (j=1;j<=x;j++)
            {
                if (x%2!=0 && j==tengah)
                {
                    for (k=1;k<=x;k++)
                        printf("*");
                }else
                {
                    for (k=1;k<=x;k++)
                    {
                        if (k%2!=0) printf("*");
                        if (k%2==0 && k!=x) printf(" ");
                    }
                }
                printf("\n");
            }
        }
    }
    return 0;
}
