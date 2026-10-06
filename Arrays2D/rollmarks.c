#include <stdio.h>
int main () {

    int n;
    printf("Enter Number of Students: ");
    scanf("%d", &n);

    int data[n][4];

    for (int i = 0; i < n; i++) {
        printf("Enter Roll, Physics, Chemistry, Maths for student %d: ", i+1);
        scanf("%d", &data[i][0]);
        scanf("%d", &data[i][1]);
        scanf("%d", &data[i][2]);
        scanf("%d", &data[i][3]);
    }

    for (int i = 0; i < n; i++) {
        printf("Roll: %d, P: %d, C: %d, M: %d\n", data[i][0], data[i][1], data[i][2], data[i][3]);
    }

    return 0;
}