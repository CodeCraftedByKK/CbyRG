#include <stdio.h>

int main () {
    printf("Enter the radius of Circle:\n");
    float radius;
    scanf("%f", &radius);
    float area = 3.14 * radius * radius;
    printf("The Area of Circle is : %f", area);

    return 0;


}