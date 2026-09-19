#include <stdio.h>
int main () {

    int marks;
    printf("Enter Your Marks: ");
    scanf("%d",&marks);

    if(marks>90 && marks<100){
        printf("Excellent");
    }

    else if (marks>80 && marks<90){
        printf("Very Good");
        
    }

    else if (marks>70 && marks<80){
        printf("Good");
    }


    return 0;
}