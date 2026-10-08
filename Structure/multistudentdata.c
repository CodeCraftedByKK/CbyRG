#include <stdio.h>

int main() {

    struct students {
        int roll;
        int engmarks;
        int phymarks;
        int mathmarks;
        int chemmarks;
    };

    printf("Enter Total Number of Students: ");
    int n;
    scanf("%d",&n);



    struct students s[n];     // 3 students: s[0], s[1], s[2]

    for (int i = 0; i < n; i++) {
        printf("\n--- Student %d ---\n", i + 1);

        printf("Enter Roll No. ");
        scanf("%d", &s[i].roll);

        printf("Enter English Marks: ");
        scanf("%d", &s[i].engmarks);

        printf("Enter Physics Marks: ");
        scanf("%d", &s[i].phymarks);

        printf("Enter Maths Marks: ");
        scanf("%d", &s[i].mathmarks);

        printf("Enter Chemistry Marks: ");
        scanf("%d", &s[i].chemmarks);
    }

    printf("\n===== Result =====\n");
    for (int i = 0; i < n; i++) {
        int total = s[i].engmarks + s[i].phymarks + s[i].mathmarks + s[i].chemmarks;
        printf("Roll: %d  Total: %d  Percentage: %.2f\n", s[i].roll, total, total / 4.0);
    }

    return 0;
}