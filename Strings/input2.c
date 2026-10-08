#include<stdio.h>
int main () {
    printf("Enter Your Name: ");
    char str[40];


    // scanf("%[^\n]s",str);

    // fgets(str, sizeof(str), stdin);


    gets(str);

    puts(str);


   
    return 0;
}