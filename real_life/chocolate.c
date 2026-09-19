#include <stdio.h>
int main (){

    printf("Enter number of Chocolates: ");
    int chocolate;
    scanf("%d",&chocolate);

    printf("Enter Number of friends: ");
    int friend;
    scanf("%d",&friend);

    int left = chocolate%friend;
    int each = chocolate/friend;

    printf("Each friend got %d chocolate and you are left with %d chocolate",each,left);





    return 0;
}