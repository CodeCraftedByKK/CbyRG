#include <stdio.h>


    void england(){
        printf("You are in England\n");
        return;
    }

    void australia(){
        printf("You are in Australia\n");
        england();
    }

    void India (){
        printf("You are in India\n");
        australia();
    }

    
int main (){

    India();




    return 0;
}