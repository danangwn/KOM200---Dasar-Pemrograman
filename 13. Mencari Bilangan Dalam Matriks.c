#include <stdio.h>
#define SIZE 101
 
int main()
{
    int n, a[SIZE],k,i=0;
    scanf("%d", &n);
    for (i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);
    for (i=0;i<n;i++){
        if(k==a[i])
        {
            printf("%d\n", i);
            break;
        }
    }
    if(i>=n)
        printf("-1\n");
    return 0;
}
