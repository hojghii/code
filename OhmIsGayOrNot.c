#include <stdio.h>
#include <stdbool.h>

int main(){

    bool Ohm;

    printf("Is Ohm gay?\npress 1 for 'yes'\npress 0 for 'no'\n: ");
    scanf("%d", &Ohm);

    if (Ohm)
    {
        printf("Ohm is gay");
    }
    else
    {
        printf ("Ohm isn't gay");
    }

    return 0;
}