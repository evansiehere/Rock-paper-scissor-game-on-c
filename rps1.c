#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char p1[100], p2[100], choice1[10], choice2[10];
    int n, i, score1 = 0, score2 = 0;

    printf("ROCK, PAPER, SCISSORS\n");
    printf("Name of player 1: ");
    scanf("%s", p1);
    printf("Name of player 2: ");
    scanf("%s", p2);
    printf("Enter the number of trials: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("%s, enter your choice (rock, paper, or scissor): ", p1);
        scanf("%s", choice1);

        printf("%s, enter your choice (rock, paper, or scissor): ", p2);
        scanf("%s", choice2);


        if (strcmp(choice1, choice2) == 0)
        {
            score1--;
            score2--;
        }
        else if (strcmp(choice1, "rock") == 0 && strcmp(choice2, "scissor") == 0)
        {
            score1++;
        }
        else if (strcmp(choice2, "rock") == 0 && strcmp(choice1, "scissor") == 0)
        {
            score2++;
        }
        else if (strcmp(choice1, "paper") == 0 && strcmp(choice2, "scissor") == 0)
        {
            score2++;
        }
        else if (strcmp(choice2, "paper") == 0 && strcmp(choice1, "rock") == 0)
        {
            score1++;
        }
        else if (strcmp(choice1, "rock") == 0 && strcmp(choice2, "paper") == 0)
        {
            score2++;
        }
        else
        {
            printf("Invalid choice\n");
        }
    }

    if (score1 > score2)
    {
        printf("%s won by %d points\n", p1, score1);
    }
    else if (score2 > score1)
    {
        printf("%s won by %d points\n", p2, score2);
    }
    else
    {
        printf("It's a draw!\n");
    }

    return 0;
}
