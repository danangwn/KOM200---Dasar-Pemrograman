#include <stdio.h>
 
int main()
{
   int data[101], n, c, d, position, swap;
   scanf("%d", &n);
   for(c=0;c<n;c++){
      scanf("%d",&data[c]);
 }
   for(c=0;c<(n-1);c++)
   {
      position=c;
 
      for ( d = c + 1 ; d < n ; d++ )
      {
         if ( data[position] > data[d] )
            position = d;
      }
      if ( position != c )
      {
         swap = data[c];
         data[c] = data[position];
         data[position] = swap;
      }
   }
 
  
 
   for ( c = 0 ; c < n ; c++ )
      printf("%d\n", data[c]);
 
   return 0;
}
