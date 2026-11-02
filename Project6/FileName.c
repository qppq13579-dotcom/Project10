#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void)
{
    int score[SIZE];
    int max, min;
    int sum = 0;
    double average;

    srand((unsigned int)time(NULL));

    for (int i = 0; i < SIZE; i++)
    {
        score[i] = rand() % 101;
    }

    max = score[0];
    min = score[0];

    printf("Student Scores\n");
    printf("--------------------\n");

    for (int i = 0; i < SIZE; i++)
    {
        printf("Student %d score: %d\n", i + 1, score[i]);

        sum += score[i];

        if (score[i] > max)
        {
            max = score[i];
        }

        if (score[i] < min)
        {
            min = score[i];
        }
    }

    average = (double)sum / SIZE;

    printf("--------------------\n");
    printf("Highest score: %d\n", max);
    printf("Lowest score: %d\n", min);
    printf("Average score: %.2f\n", average);

    return 0;
}