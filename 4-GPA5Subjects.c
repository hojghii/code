#include <stdio.h>

int main()
{
    int i, score[5];
    char grade[5];
    float gp[5];
    float sum = 0.0f;

    for (i = 0; i < 5; i++)
    {
        printf("ใส่คะแนนวิชา %d (0-100): ", i + 1);
        scanf("%d", &score[i]);
        if (score[i] < 0 || score[i] > 100)
        {
            printf("คะแนนต้องอยู่ระหว่าง 0-100\n");
            i--;
            continue;
        }

        if (score[i] >= 80)
        {
            grade[i] = 'A';
            gp[i] = 4.0f;
        }
        else if (score[i] >= 70)
        {
            grade[i] = 'B';
            gp[i] = 3.0f;
        }
        else if (score[i] >= 60)
        {
            grade[i] = 'C';
            gp[i] = 2.0f;
        }
        else if (score[i] >= 50)
        {
            grade[i] = 'D';
            gp[i] = 1.0f;
        }
        else
        {
            grade[i] = 'F';
            gp[i] = 0.0f;
        }

        sum += gp[i];
    }

    printf("\n--- สรุปผล ---\n");
    for (i = 0; i < 5; i++)
    {
        printf("วิชา %d: %3d คะแนน -> เกรด %c (%.2f)\n", i + 1, score[i], grade[i], gp[i]);
    }
    printf("\nเกรดเฉลี่ย (GPA): %.2f\n", sum / 5.0f);

    return 0;
}