#include <stdio.h>
int main () {

    struct pokemon{
        int hp;
        int speed;
        int attack;
    };

    struct pokemon pikachu; 
        pikachu.attack = 60;
        pikachu.hp= 50;
        pikachu.speed= 100;


    struct pokemon charizard;
        charizard.attack=80;
        charizard.hp=50;
        charizard.speed=80;

        


            printf("HP: %d\nSpeed: %d\nAttack: %d\n", pikachu.hp, pikachu.speed, pikachu.attack);
 
            printf("HP: %d\nSpeed: %d\nAttack: %d\n",charizard.hp,charizard.speed,charizard.attack);
    


    return 0;
}