#include <stdio.h>
int main(){

    int totalspoon, friends, eatenspoon;

    printf("Enter Total No. of spoon: ");
    scanf("%d",&totalspoon);

    printf("Enter No. of Friends: ");
    scanf("%d", &friends);

    printf("Enter No. of Spoon You eaten: ");
    scanf("%d", &eatenspoon);

    int remaining= totalspoon-eatenspoon;

    int eachget = remaining/friends;

    printf("Each friend will get %d spoon\n",eachget);


    printf("You will get %d spoon",eachget+eatenspoon);





    return 0;}