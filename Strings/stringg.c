#include <stdio.h>
#include <string.h>
int main () {

    printf("Enter your Name: ");
    char str[40];
    // scanf("%s",str);
    // printf("%s",str);

    gets(str);
    puts(str);


    return 0;
}