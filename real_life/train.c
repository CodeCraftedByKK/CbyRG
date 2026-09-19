#include <stdio.h>
int main () {

    printf("Enter the distance in KMs: ");
    float distance;
    scanf("%f",&distance);

    printf("Enter the Speed of train : ");
    float speed;
    scanf("%f",&speed);
    
   float timeinhours = distance / speed ; 

   int timeinmins= (int) (timeinhours * 60.0f); // modulo operator does not work on float 

   int hours = timeinmins/60;
   int mins = timeinmins%60;

    printf("You have to wait %d hours and %d mins to reach your destination ", hours, mins );



    return 0;
}