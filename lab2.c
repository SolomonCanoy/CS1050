/************************************************
* CMP_SC 1050H
* FS 2024
* Lab 2
* By Solomon Canoy (scttp)
* August 30, 2024
**************************************************/

#include <stdio.h>


int main(void) 
	{
	
	//Variables
	int X, Y;
	
	//Prompt and Read 1st Int
	printf("\nPlease enter an integer: ");
	scanf("%d", &X);

	//Prompt and Read 2nd Int
	printf("Please enter another integer: ");
	scanf("%d", &Y);

	//Print Values of Variables
	printf("\n\nFirst Integer (X) = %d\n", X);
	printf("Second Integer (Y) = %d\n", Y);


	//Calculate New Values and Print
	
	//Product
	printf("\nThe product of X and Y = %d\n", X * Y);
	
	//Quotient
	printf("The quotient of X divided by Y = %d\n", X / Y);

	//Weird Expression
	printf("The value of (Y - 2) * X = %d\n", (Y - 2) * X);

	//Honors Section
	printf("\n*** HONORS SECTION ***\n");

	//1st Mod
	printf("\nThe remainder from dividing Y by X = %d\n", Y % X);

	//2nd Mod
	printf("The remainder of (X + 3) divided by Y = %d\n", (X + 3) % Y);

	//Repeat Init Values
	printf("\nFirst Integer (X) = %d\n", X);
	printf("Second Integer (Y) = %d\n", Y);

	return(0);
	}
