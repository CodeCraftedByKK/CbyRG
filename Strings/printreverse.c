#include <stdio.h>

int main() {
    char str[40];

    printf("Enter string: ");
    scanf("%39[^\n]", str);

    int size = 0;
    while (str[size] != '\0')
        size++;

    for (int i = 0, j = size - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("The reverse string is: %s\n", str);
    return 0;
}