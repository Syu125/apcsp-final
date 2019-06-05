#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
char * checkLetters(char input, char word[][7], int index, char ans[]){
for(int i = 0; i < 6; i++){
	if(input==word[index][i]){
	ans[i] = word[index][i];
	}
}
return ans;
}

int main (){
srand(time(0));

char c[][7] = { 
"ahsdgs", 
"sasdga" 
  };
  
int i = rand() % 2;
//printf("%d",i);
char ans[] = "______";
char r[7];
char in = 'a';
strcpy (r, checkLetters(in, c, 1, ans));
for(int i = 0; i < 6; i++){
	printf("%c", r[i]);
	} 
}
