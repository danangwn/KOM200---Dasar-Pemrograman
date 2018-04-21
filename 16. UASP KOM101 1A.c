#include<stdio.h>
#define SIZE 100
int main(){

    int m,n,i,j,b=0,k=0,bb=0,kk=0,a[SIZE][SIZE],terbesar,terkecil, counter=0,counter1=0;
    scanf("%d %d", &m, &n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    terbesar=a[m-1][n-1];
    terkecil=a[m-1][n-1];
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]>terbesar)
            {
               terbesar=a[i][j];
               //b=i+1; k=j+1;
            }
            if(a[i][j]<=terkecil)
            {
               terkecil=a[i][j];
              // bb=i+1; kk=j+1;
            }
        }
    }
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==terbesar&&counter==0)
            {
               b=i+1; k=j+1;
               counter++;
            }

            }
        }
      for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==terkecil&&counter1==0)
            {
               bb=i+1; kk=j+1;
               counter1++;
            }
        }
    }
    printf("%d %d\n", bb, kk);
    printf("%d %d\n", b, k);

    return 0;
}
