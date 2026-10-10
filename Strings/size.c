#include <stdio.h>
#include <string.h>

int main() {
    char str[40];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';   // remove trailing newline

    int size = 0;
    while (str[size] != '\0')
        size++;

    printf("The size is: %d\n", size);
    return 0;
}