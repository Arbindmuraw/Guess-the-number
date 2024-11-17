#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a, min=20,max=81;
    srand(time(0));
    int randomNum= min+rand()%max;

    do {
        printf("Guess the Number(20 to 100):-");
        scanf("%d",&a);

        if ( a==randomNum) {
            printf("Perfect choice! You have won.\n");
            break;

        } else {
            if(a>100 || a<20) {
                printf("invalid entered.\n");
            } else if(a>randomNum) {
                printf("Guess lower number.\n");
            } else {
                printf("Guess higher number.\n");

            }
        }


    }
    while (a!=randomNum);

    return 0;
}