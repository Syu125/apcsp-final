#include <stdio.h>
char[][] checkLetters(char input, char word[][], int index, char result[]){
for(int i = 0; i < 6; i++){
	if(input == word[index][i]){
	result[i] = input;
	}
}
return result;
}
