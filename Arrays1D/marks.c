#include <stdio.h>
int main (){
    
    int marks[10] = {25,65,32,89,47,87,62,12,24,29};

    for(int i=0; i<=9; i++){
        if(marks[i]<=35){
            printf("%d\n",i);
            printf("%d\n",marks[i]);
        }
    }





    return 0;
}