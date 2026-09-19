#include <stdio.h>
int main (){
 
    int totalclass;
    printf("Enter total Classes: ");
    scanf("%d",&totalclass);

    int classbunked;
    printf("Enter Classes Bunked: ");
    scanf("%d",&classbunked);

    int classattened = totalclass-classbunked;

    printf("You have attened %d classes",classattened);



    return 0;
}