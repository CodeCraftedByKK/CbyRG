// strings

#include <stdio.h>
int main () {

    char name [] = {
        'J', 'o', 'h', 'n', '\0'
    };

    char name2 [] = "Kanhaiya";

    printf("The name is: %s\n", name);
    printf("The name2 is: %s\n", name2);

    return 0;
}

void printString(char arr[]) {
    for (int i = 0; arr[i] != '\0'; i++) {
        printf("%c", arr[i]);
    }
    printf("%s\n", arr);
}
