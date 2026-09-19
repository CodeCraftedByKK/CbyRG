#include <stdio.h>
int main (){

    printf("Enter Total No. of Samosas: ");
    int total;
    scanf("%d",&total);

    printf("Enter no of friends: ");
    int friend;
    scanf("%d",&friend);

    printf("Enter No. of Somasa each ate: ");
    int samosa;
    scanf("%d",&samosa);

    int left = total - (friend*samosa);

    printf("You have left %d samosa\n",left);
   

    return 0;
}