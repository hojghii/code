#include <stdio.h>

int main()
{
    int gender, num, summale, sumfemale, i;

    for ( i = 1; i <= 5; i++)
    {
        printf("Are you male or female?\nIf male, press 1.\nIf female, press 0.\n: ");
        scanf("%d", &gender);
        if (gender == 1)
        {
            printf("Hi Mr. Input your number: ");
            scanf("%d", &num);
            num * 3;
            summale += num;
        }
        
        if (gender == 0)
        {
            printf("Hi Mr. Input your number: ");
            scanf("%d", &num);
            num * 2;
            sumfemale += num;
        }
    }
    
    printf("The total for male is: %d\n", summale);
    printf("The total for female is: %d\n", sumfemale);

    return 0;
}