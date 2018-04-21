#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 
char op;
int *data, n, i;
 
double mean(int *data, int n)
{
    double hasil=0.0;
    for(i=0; i<n; i++)
    {
        hasil+= *(data+i);
    }
    return (hasil/n);
}
 
double variance(int *data, int n)
{
    double rataan=0.0, hasil=0.0;
    for(i=0; i<n; i++)
    {
        rataan+= *(data+i);
    }
    rataan/=n;
 
    for(i=0; i<n; i++)
    {
        hasil+=pow((*(data+i)-rataan), 2);
    }
    hasil/=n;
    return hasil;
}
 
double stddev(int *data, int n)
{
    double rataan=0.0, hasil=0.0;
    for(i=0; i<n; i++)
    {
        rataan+= *(data+i);
    }
    rataan/=n;
 
    for(i=0; i<n; i++)
    {
        hasil+=pow((*(data+i)-rataan), 2);
    }
    hasil/=n;
    return sqrt(hasil);
 
}
 
double stat(double (*function)(int *, int), int *data, int n)
{
    return function(data, n);
}
 
int main ()
{
    scanf("%c", &op);
    scanf("%d", &n);
    data=(int*)malloc(n*sizeof(int));
    for(i=0; i<n; i++)
        scanf("%d", data+i);
    switch (op)
    {
        case 'M': printf("%f\n", stat(mean, data, n)); break;
        case 'V': printf("%f\n", stat(variance, data, n)); break;
        case 'S': printf("%f\n", stat(stddev, data, n));
    }
    free(data);
    return 0;
}
