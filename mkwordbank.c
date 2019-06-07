#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "checkLetters.c"
#include "hintGen.c"
#include "scoreCount.c"

#define TRUE
#define FALSE

int main (int argc, char * argv[]) 
{
	//Create an array of strings
	int numwords;
	scanf("%d", &numwords)
	char inputString[50];
	scanf("%s", inputString);
	char wordList[numwords][50];
	int counter = 0;
	while (counter < numwords) 
	{
		printf("What is word %d?\n", (counter + 1));
		printf("(Maximum permitted word length is 50 letters)\n");
		printf("(Lowercase letters ONLY)\n");
		char inputString[50];
		scanf("%s", inputString);
}
//Check if lowercase
int checkLowercase (char *inputString) 
{
	char wordList[numwords][50];
	int charindex = 0;
	while (charindex < strlen(inputString)) 
	{
	if (!('a' <= inputString[charindex] && inputString[charindex] <= 'z')) 
		{
		return FALSE;
			}
	else
			{
	charindex++;
		}
		return TRUE;
	}
	if (checkLowercase(inputString) == TRUE) 
		{
        	//Copy string into word bank
         	int charindex;
         	for (charindex = 0; charindex < 50; charindex++) {
		wordList[counter][charindex] = inputString[charindex];
        	}
        counter++;
        printf("\n");
        } 
	 	else 
		{
		printf("Invalid input. Try again.\n")
		continue;
      		}
   	}
	//Choose a random word
	srand(time(NULL));
	int wordNum = (int)(rand()%numwords);
	char *word = &wordList[wordNum][0];
	printf("%s", word);
}
