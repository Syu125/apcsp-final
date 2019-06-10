
//
// hellomake.c
//
// example C program to demo multiple source files and Makefile
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "hellofunc.h"

#define NUMWORDS 20

// include a header file

int main (int argc, char * argv[]) 
{
	printf("Playing: Hangman\n");

	char wordList[NUMWORDS][7]={"apples","orange","author","banana","bridge","castle","camera","coffee","debate","finals","finish","garden","hidden","making","lawyer","office","online","player","reader","school",};
	char input;
	float re = 0;
	int guesses = 0;

	//char ansC[6];

	//Choose a random word
	srand(time(NULL));
	int wordNum = (int)(rand()%NUMWORDS);

	char ans[] = "______\n";
	printImage (guesses);

	while(guesses < 6 && re < 0.99)
	{
		//printf("%d",i);
		//scanf("%c", &input);
		input=getchar();
		getchar();
		if(checkLetters(input, wordList, wordNum, ans)<2)
			guesses++;
		printf("%s\n", ans); 
		
		//printf("%d",i);HINT
		//strcpy (r, hintGen (wordList, i, ans));
		//for(int i = 0; i < 6; i++){
		//printf("%c", r[i]);
		//hintGen (wordList, index, ansC);

		re = score(ans);
		printf("Percent guessed correctly: ");
		printf("%f\n",re);
	printImage (guesses);

	}
	if(guesses == 6){
	printf("You lost!\n");
	printf("The word was ");
	printf("%s\n", wordList[wordNum]);
	}
	if(re > 0.99){
	printf("You won\n");
	}

}
