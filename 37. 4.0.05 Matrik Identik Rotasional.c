#include <stdio.h>
#define SIZE 100
int main ()
{
    int n,i,j,sudut, p=0,k=0, a[SIZE][SIZE],b[SIZE][SIZE];
 
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){scanf("%d", &a[i][j]);
				b[i][j]=a[i][j];}
    }
    scanf("%d", &sudut);
 
 
    if(sudut==90){
for(i=0;i<n;i++)
{
        for(j=0;j<n;j++)
            {
                b[j][i]=a[i][j];
            }
    }

for(i=n-1;i>=0;i--)
{
    for(j=0;j<n;j++)
    {
        printf("%d", b[i][j]);
                if(j==n-1) printf("\n");
                else printf(" ");
    }
}
			}
else if(sudut==180)
{
    for(i=n-1;i>=0;i--)
    {
        for(j=0;j<n;j++)
       {
           b[k][p]=a[i][j];
		p++;
       }
       p=0;
       k++;
    }
	
	for(i=0;i<n;i++)
    {
        for(j=n-1;j>=0;j--)
       {
           printf("%d", b[i][j]);
        if(j==0) printf("\n");
        else printf(" ");
       }
    }
}
 
else if(sudut==270)
{
   for(i=0;i<n;i++)
{
        for(j=0;j<n;j++)
            {
                b[j][i]=a[i][j];
            }
    }
for(i=0;i<n;i++)
{
    for(j=n-1;j>=0;j--)
    {
        printf("%d", b[i][j]);
                if(j==0) printf("\n");
                else printf(" ");
    }
}
 
 
}

else if (sudut==0)
	{
		for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
					printf("%d", a[i][j]);
					if(j==n-1) printf("\n");
					else printf(" ");
				}
    }
	}


 
 
return 0;
}
