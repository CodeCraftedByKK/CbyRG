#include <stdio.h>
#include <string.h>
int main () {

    printf("Enter your Name: ");
    char str[40];
   // scanf("%s",str); This only take first word as input 

    //gets(str);

    scanf("%[^\n]s",str);

    // printf("Your Name is %s",str);

    puts(str);










    return 0;
}