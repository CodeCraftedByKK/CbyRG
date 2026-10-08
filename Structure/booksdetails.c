// Create a Structure type 'book' with name, price and number of pages as its attributes 

#include <stdio.h>
#include <string.h>

int main () {

    struct book{
        char name[20];
        float price;
        int pageno;

    } a,b,c;


    a.price= 120;
    a.pageno= 80;
    strcpy(a.name,"Secrect Seven");

    b.price=200;
    b.pageno=150;
    strcpy(b.name,"My World");

    printf("%s\n",a.name);
    printf("%s",b.name);















    return 0;
}