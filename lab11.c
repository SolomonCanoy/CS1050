/************************************************
* CMP_SC 1050H
* FS 2024
* Lab 11
* By Solomon Canoy (scttp)
* November 1, 2024
**************************************************/

#include <stdio.h>
#include <ctype.h>
#include "filter.h"


// You should make this function actually do something.
// As it is, it just returns whatever you give it.
char * Filter(char *s)
{
	for (int i=0, j; s[i] != '\0'; i++)		//removes illegal characters
	{
		while (!(isalnum(s[i])) && s[i] != ' ' && s[i] != '\t' && (s[i] != '\0') )
		{
			for (j = i; s[j]!='\0'; j++)
			{
				s[j]=s[j+1];
			}
			s[j] ='\0';
		}
	}



	for (int i=0; s[i] != '\0'; i++) //checks and changes letters
	{
		if(isalpha(s[i]))
		{
			if(islower(s[i]))
			{
				s[i] = toupper(s[i]);
			}

			else if (isupper(s[i]))
			{
				s[i] = tolower(s[i]);
			}
		}

		if (isdigit(s[i]))		//checks and changes digits
		{
			if(s[i] < '6')
			{
				s[i] = s[i] + 4;
			}
			else if (s[i] >= '6')
			{
				s[i] = s[i] - 6;
			}
		}

		if(s[i] == '\t')  //changes tabs to spacers
		{
			s[i] = ' ';
		}
	}
	
	return s;
}
