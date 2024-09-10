#include <stdio.h>


//**********FUNCTION PROTOTYPES***********
long factorial(int);

double ecalc(int);

double dexp(double, int);


//*************MAIN**************
int main(void)
{
	//Variables
	double e = ecalc(13);

	//Initial approx. of e to 10 decimals
	printf("e = %.10f\n\n", e);

	//Powers of e to 3 decimals
	for (int i=1;i<=5;i++)
	{
		printf("e to the %d power = %.3lf\n", i, dexp(e,i));
	}

  return(0);
}


//*********FUNCTIONS*********

//Brings int to a factorial
long factorial(int n)
{
	long result = 1;
	for(int i=n; i>1; i--)
	{
		result*=i;
	}

	return result;
}

//Approximates e based on addition of terms
double ecalc(int n)
{
	double result;
	for (int i=0; i<=n; i++)
	{
		result+= (double) 1/factorial(i);
	}
	
	return result;
}

//Brings double to a positive exponent
double dexp(double base, int n)
{
	double result = base;
	int count = 2;
	
	while (count <= n)
	{
		result*=base;
		count++;
	}

	return result;
}
