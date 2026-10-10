#include <stdio.h>
int main () {

    // program to write n number of odd terms and their sum

    printf("Enter the Number: ");
    int num;
    scanf("%d", &num);
    
    for (int i = 0; i <= num; i++)
    {
       if (i % 2 != 0)
       {
           printf("%d\n", i);
       }
    }
    




    return 0;

}