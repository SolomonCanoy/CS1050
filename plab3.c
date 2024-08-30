#include <stdio.h>

int main(void) 
{

    int count = 1;

    while (count < 50) 
    {
        if (((count % 3) == 0) && ((count % 5) == 0))
        {
            printf("Fizz Buzz, ");
        }
        else if ((count % 3) == 0)
        {
            printf("Fizz, ");
        }
        else if ((count % 5) == 0)
        {
            printf("Buzz, ");
        }
        else
        {
            printf("%d, ", count);
        }
        count++;
    }

    printf("Buzz");
}
