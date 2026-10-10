#include <stdio.h>


int factorial(int x){
     int nfact= 1; 

    for(int i =1; i<=x; i++){
        nfact= nfact*i;
    }
    return nfact;
}

int combination(int n, int r){
    int ncr = factorial(n) / (factorial(r)*factorial(n-r));
    return ncr;
}

int main (){




    return 0; 
 }