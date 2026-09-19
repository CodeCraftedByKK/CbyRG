#include <stdio.h>
#include <math.h>

int main() {
    


    double a,b;
    printf("Enter Base : ");
    scanf("%lf",&a);

    printf("Enter Exponent: ");
    scanf("%lf",&b);

    double q= pow(a,b);
    printf("%lf",q);

    return 0;

}