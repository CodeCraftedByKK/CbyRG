// use of floor and ceil furnctions on floating point value 

#include<stdio.h>
#include<math.h>

int main () {
    float num;
    printf("Enter a floating point number: ");
    scanf("%f", &num);

    printf("The floor value of %.2f is %.2f\n", num, floor(num));
    printf("The ceil value of %.2f is %.2f\n", num, ceil(num));

    return 0;
}
