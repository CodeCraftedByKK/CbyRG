#include <stdio.h>

int main() {

    
    char name[50];

    scanf("%s", name);        // stops at space! "Rahul Sharma" gives only "Rahul"
    printf("%s\n", name);

    // Reading a full line (use this):
    getchar();                // clears leftover '\n' from the previous scanf
    fgets(name, sizeof(name), stdin);
    printf("%s", name);       // fgets keeps the '\n' too
    return 0;
}