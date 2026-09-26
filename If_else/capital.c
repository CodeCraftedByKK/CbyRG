#include <stdio.h>

int main() {
    char A;

    printf("Enter First character: ");
    scanf("%c", &A);

    if (A >= 'A' && A <= 'Z') {
        printf("Capital");
    }
    else if (A >= 'a' && A <= 'z') {
        printf("Small");
    }
    else {
        printf("Not an alphabet");
    }

    return 0;
}