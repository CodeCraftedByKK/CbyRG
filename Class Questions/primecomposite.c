#include <stdio.h>

int main () {

    printf("Enter any Number: ");

    int num;
    scanf("%d", &num);

    int count = 0;

    for (int i = 1; i <=num; i++)
    {
       if (num%i==0)        

       {
        count++;
       }
       
    }
    
    if (count==2)
    {
        printf("Prime Nubmber");

    }

    else
    {
        printf("Composite Number");
    }
    
    


    return 0;

}