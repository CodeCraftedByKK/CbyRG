#include <stdio.h>
#include <string.h>

int main () {
    char str[40];
    puts("Enter a String");
    gets(str);
    puts("The Reverse is: ");
    int size = 0;
    int i = 0;
    while(str[i]!='\0'){
        size++;
        i++;
    }
    
}