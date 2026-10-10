#include <stdio.h>
int main () {
    char str[] = "kanhaiya";
    char *ptr = str; // point toward str0
    // printf("%p\n",&str[0]);
    // printf("%p",str);

    int i = 0;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
        i++;
    }
    




    return 0;
}