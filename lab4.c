/************************************************
* CMP_SC 1050H
* FS 2024
* Lab 4
* By Solomon Canoy (scttp)
* September 13, 2024
**************************************************/

#include <stdio.h>
#include <math.h>


//------------------PROTOTYPES----------------------
char riddlePrompt(void);



//Main----------------------------------------------
int main(void){

    //Chapter 1 ------------------------------------
    printf("\n\n~~~~~~~CHAPTER ONE~~~~~~~\n\n");
    
    //Ch1 Vars
    int sum=0;
    
    for (int i = 2; i <= 100; i+=2)
    {
        if ((i % 5) != 0)
        {
            sum+=i;
        }
    }
    
    //Print Sum
    printf("Mystic Code Fragment 1 = %d", sum);
    

    //Chapter 2 ------------------------------------
    printf("\n\n~~~~~~~CHAPTER TWO~~~~~~~\n\n");

    //Ch2 Vars
    int attempt=3, verif, frag2;
    char answerChoice, correct, again;

    correct = riddlePrompt();
    while (correct == 'z') //checks input
    {
        correct = riddlePrompt();
    }
    //Accepts and Verifies Answer
    do 
    {
        printf("\nEnter your choice (a, b, or c): ");
        scanf(" %c", &answerChoice);
        while ((answerChoice != 'a') && (answerChoice != 'b') && (answerChoice != 'c'))
        {
            printf("\nPlease only enter a, b, or c: ");
            scanf(" %c", &answerChoice);
        }

        verif = (answerChoice == correct) ? 1 : 0; //Verifies Answer

        if (verif == 1)
        {
            printf("Correct!\n");
            attempt = -1;
            frag2 = 42;
        }
        else 
        {
            attempt--;
            printf("Incorrect... %d attempts left\n\n", attempt);
            if (attempt != 0) //Prompts if you want a different riddle
            {
                printf("Would you like to pick a different riddle? y/n: ");
                scanf(" %c", &again);
                if (again == 'y')
                {
                    correct = riddlePrompt();
                    while (correct == 'z') //checks input
                        {
                            correct = riddlePrompt();
                        }
                }
            }
        }
        
    } 
    while (attempt > 0);

    if (attempt == 0) 
    {
        printf("You have failed the riddle! :(\n");
        frag2 = 0;
    }

    printf("Mystical Code Fragment 2 = %d\n", frag2);


    //Chapter 3-------------------------------------
    printf("\n\n~~~~~~CHAPTER THREE~~~~~~~\n\n");
    //Adds Fragments
    sum += frag2;

    //Tells fortune of the Kingdom
    printf("The final Mystic Code is %d\n", sum);
    printf((sum == 2042) ? "The Kingdom of Code is saved!" : "The Kingdom of Code is doomed!\n");


    //Chapter 4-------------------------------------
    printf("\n\n~~~~~~~CHAPTER FOUR~~~~~~~\n\n");

    //Ch 4 vars
    int place = 1, newCode = 0, position = 0;

    //Checks highest numbers place
    while (sum > place)
    {
        place*=10;
    }

    //finds value for specified place, then adds new value to respective new place
    do
    {
        place/=10;
        int currPos;
        currPos = sum / place;
        newCode+= currPos * pow(10, position);

        sum-=currPos*place;
        position++;
    }
    while (place!=1);

    printf("The Reversed Mystic Code is %d\n\n", newCode);

    return (0);
}



//------------FUNCTION DEFINITIONS------------------

//Prompts Riddle Choice
char riddlePrompt(void)
{
    int riddleChoice;
    char correctAns;
    //Riddle Prompt
    printf("Choose a riddle (1, 2, 3, 4, or 5): ");
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

        case 4:
            printf("\nI’m light as a feather, yet the strongest man can’t hold me for much longer.\n(a) The air\n(b) Your breath\n(c) A feather\n");

            correctAns = 'b';
            break;

        case 5:
            printf("\nWhat can fill a room but takes up no space?\n(a) Air\n(b) Light\n(c) Cheese\n");

            correctAns = 'b';
            break;

        default:
            printf("\nPlease only enter 1, 2, 3, 4, or 5\n");
            correctAns = 'z';
            break;
    }
    return correctAns;
}
