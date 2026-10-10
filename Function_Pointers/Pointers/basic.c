#include<stdio.h>
int main () {

    int a = 5;
    int*x = &a; // pointer 
    *x = 7;
    printf("%p\n",&a); // %p is used for print Address, and & is also used to print address 
    printf("%p\n",&x);
    printf("%d",*x); // printing the value stored at location 





    return 0;
}