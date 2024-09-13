#include <stdio.h>
#include <math.h>

int main(void)
{
    //Challenge 1 -----------------------

    printf("\n\n~~~~~~~CHALLENGE ONE~~~~~~~\n");

    for (int i=-1; i<10; i++)
    {
        int currNum = pow(3, i);
        printf("%d\n", currNum);
    }


    //Challenge 2 -----------------------

    printf("\n\n~~~~~~~CHALLENGE TWO~~~~~~~\n");

    //Challenge 2 Variables
    int riddleChoice, attempt=3;
    char answerChoice, correctAns;

    //Riddle Prompt
    printf("Choose a riddle (1, 2, or 3): ");
    scanf("%d", &riddleChoice);

    //Riddle Choice
    switch (riddleChoice) 
    {
        case 1:
            printf("\nWhat has to be broken before you can use it?\n(a) An egg\n(b) A mirror\n(c) A basketball\n");

            correctAns = 'a';
            break;

        case 2:
            printf("\nI’m tall when I’m young, and I’m short when I’m old. What am I?\n(a) A chair\n(b) A candle\n(c) A tree\n");

            correctAns = 'b';
            break;

        case 3:
            printf("\nWhat is always in front of you but can’t be seen?\n(a) The ceiling\n(b) A pineapple\n(c) The future\n");

            correctAns = 'c';
            break;
    }

    do 
    {
        printf("\nEnter your choice (a, b, or c): ");
        
        scanf(" %c", &answerChoice);

        if (answerChoice == correctAns)
        {
            printf("Correct!\n");
            attempt = -1;
        }
        else 
        {
            attempt--;
            printf("Incorrect... %d attempts left\n\n", attempt);
        }
        
    } 
    while (attempt > 0);

    if (attempt == 0) 
    {
        printf("You have failed the riddle! :(\n");
    }

    //Challenge 3

    printf("\n\n~~~~~~~CHALLENGE THREE~~~~~~~\n");

    int given, newCode;

    printf("Enter the given number: ");
    scanf("%d", &given);

    ((given % 2) == 0) ? (newCode = given + 50) : (newCode = given - 25);

    printf("The final code is: %d", newCode);

    return(0);
}
