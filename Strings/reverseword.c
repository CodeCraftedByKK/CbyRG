#include <stdio.h>
#include <string.h>

int main () {

    char word[40];
    gets(word);

    for(int i=0; i<strlen(word); i++){
        printf("%c\n",word[i]);
    }





    return 0;
}