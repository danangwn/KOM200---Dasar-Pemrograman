#include <stdio.h>
void area_circumference(const double radius, double *area, double *circumference)
{
    double pi=3.14159265359;
 
    *circumference=2*pi*radius;
    *area=pi*radius*radius;
}
int main()
{
    double radius,luas,keliling;
    scanf("%lf", &radius);
    area_circumference(radius,&luas,&keliling);
    printf("%.6lf %.6lf\n", luas, keliling);
    return 0;
}
