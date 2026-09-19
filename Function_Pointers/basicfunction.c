#include <stdio.h>

void greet () {

    printf("Good Morning\n");
    printf("How are you? \n");

    return;
}

int main () {

    greet(); // this is calling the function -> refering towards the greet function 
    greet();
    greet();
    
    return 0; 
}