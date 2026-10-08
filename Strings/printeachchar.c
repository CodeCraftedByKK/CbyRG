#include <stdio.h>

int main () {

    char str[40];
    gets(str);

    int i = 0;
    while(str[i] != '\0' ){
        printf("%c,",str[i]);
        i++;
    }


    // while (arr[i] != '\0') {
    //     printf("%c", arr[i]);
    //     i++;
    // }







    return 0;
}