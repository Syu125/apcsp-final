#include <stdio.h>
#include <stdlib.h>

char [] hintGen(char c[][], int index, char ansC[]){
int r = rand %4;
for(int i = 0; i < 6; i++){
if(r == 1){
ansC[i] = c[index][i];
}
}
return ansC;
}
