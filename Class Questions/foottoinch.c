#include<stdio.h>
int main () {
    printf("Enter length in Foot: ");
    float foot;
    scanf("%f", &foot);

    float inch = foot * 12;
    printf("%.2f Foot is equal to %.2f Inch\n", foot, inch);

    return 0;
}