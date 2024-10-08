#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    const int NUM_SEQUENCES = 5;
    const int SEQUENCE_LENGTH = 10;
    const int RELATIONSHIP_THRESHOLD = 7;

void initializeSequences(char[][SEQUENCE_LENGTH], int);
void displaySequences(char[][SEQUENCE_LENGTH], int);
int calculateSimilarity(char[][SEQUENCE_LENGTH]);
void mutateSequence(char[][SEQUENCE_LENGTH]);

int main(void)
{
    srand(time(NULL));

    
    int anotherGo = 1, choice = 1;
    char geneticArray[NUM_SEQUENCES][SEQUENCE_LENGTH];

    initializeSequences(geneticArray, NUM_SEQUENCES);

    printf("Initial Sequences:\n");
    displaySequences(geneticArray, NUM_SEQUENCES);
    
    while (anotherGo == 1)
    {
        printf("Choose an operation:\n1. Calculate Simularity\n2. Mutate Sequence\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                if (calculateSimilarity(geneticArray) == 1)
                {
                    printf("They are similar");
                }
                else
                {
                    printf("Not similar");
                }
                break;
            case 2:
                mutateSequence(geneticArray);
                break;
            case 3:
                anotherGo = 0;
                break;
        }
    }
    

    return(0);
}

void initializeSequences(char array[][SEQUENCE_LENGTH], int size)
{
    int randChoice;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<SEQUENCE_LENGTH; j++)
        {
            randChoice = rand() % 4;
            switch(randChoice)
            {
                case 0: array[i][j] = 'A'; break;

                case 1: array[i][j] = 'T'; break;

                case 2: array[i][j] = 'C'; break;

                case 3: array[i][j] = 'G'; break;
            }
        }
    }
}


void displaySequences(char array[][SEQUENCE_LENGTH], int size)
{
    for (int i=0; i<size; i++)
    {
        for (int j=0; j<SEQUENCE_LENGTH; j++)
        {
            printf("%c ", array[i][j]);
        }
        printf("\n");
    }
}


int calculateSimilarity(char array[][SEQUENCE_LENGTH])
{
    int choice1 = -1, choice2 = -1, similar = 0, isSimilar = 0;
    
    printf("Enter two of the sequences to compare (0-4): ");
    scanf("%d %d", &choice1, &choice2);
    
    for (int i=0; i<SEQUENCE_LENGTH; i++)
    {
        if(array[choice1][i]==array[choice2][i])
        {
            similar++;
        }
    }
    
    printf("Similarity between sequence %d and %d: %d%% \n", choice1, choice2, similar*10);
    
    if (similar >= RELATIONSHIP_THRESHOLD)
    {
        isSimilar=1;
    }
    
    return(isSimilar);
    
}

void mutateSequence(char array[][SEQUENCE_LENGTH])
{
    int choice = -1, numMut = 0, randPos = 0, randVal = 0;
    
    printf("Enter sequence to mutate (0-4): ");
    scanf("%d", &choice);
    
    printf("Enter number of mutations to perform: ");
    scanf("%d", &numMut);
    
    for (int i=0; i<numMut; i++)
    {
        randPos = rand() % 10;
        randVal = rand() % 4;
        switch(randVal)
            {
                case 0: array[choice][randPos] = 'A'; break;

                case 1: array[choice][randPos] = 'T'; break;

                case 2: array[choice][randPos] = 'C'; break;

                case 3: array[choice][randPos] = 'G'; break;
            }
    }
    printf("Sequence after mutation:\n");
    displaySequences(array, NUM_SEQUENCES);
}
