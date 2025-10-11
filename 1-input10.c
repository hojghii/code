#include <stdio.h>

int main()
{
    int highest = 0, lowest, input, i;

    for (i = 0; i <= 9; i++)
    {
        printf("Input your number: ");
        scanf("%d", &input);
        if (i == 0)
        {
            highest = input;
            lowest = input;
        }

        if (input > highest)
        {
            highest = input;
        }
        else if (input < lowest)
        {
            lowest = input;
        }
    }

    printf("Hightest number is: %d\n", highest);
    printf("Lowest number is: %d\n", lowest);

    return 0;
}