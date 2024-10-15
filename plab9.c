#include <stdio.h>

void modifyCharacter(char *ch);
void printDiamond(int size, char *startChar);

int main(void)
{
  char letter;
  char *letPtr = &letter;

  modifyCharacter(*letPtr);
  printf("%c", letter);

  
}

void modifyCharacter(char *ch)
{
  *ch++;
}

void printDiamond(int size, char *startChar)
{
  char array[2*size - 1][2*size - 1];

  for(int i = 0; i<size; i++)
    {
      for(int j = 0; j<(2*size - 1); j++)
        {
          if((j>=(size-j)) && (j<=(size+j)))
          {
            array[i][j] = *startChar;
          }
          else
          {
            array[i][j] = ' ';
          }
          printf("&c", array[i][j]);
        }
      modifyCharacter(*startChar);
    }
    for(int i = size; i<(2*size - 1); i++)
    {
      *startchar= *startchar - 1;
      for(int j = 0; j<(2*size - 1); j++)
        {
          if((j>=(size-j)) && (j<=(size+j)))
          {
            array[i][j] = *startChar;
          }
          else
          {
            array[i][j] = ' ';
          }
          printf("&c", array[i][j]);
        }
    }
}
