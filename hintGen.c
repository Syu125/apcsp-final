#include <stdio.h>
#include <stdlib.h>
char * hintGen(char c[][7], int index, char ansC[]){
int r = rand() %2;
for(int i = 0; i < 6; i++){
//printf("#: %d\n",r);
//printf("%c",c[index][i]);
if(r == 0){
ansC[i] = c[index][i];
printf("%c %c\n",ansC[i],c[index][i]);
r = rand() % 2;
}else{
r = rand() % 2;
}
}
return ansC;
}

int main(){
char c[][7] = {
	"ahsdgs",
	"sasdge"
    };

int i = rand() % 2;
//printf("%d",i);
char ans[] = "_ _ _ _ _ _";
char r[7];
r = hintGen(c,i,ans);

/*for(int i = 0; i < 3; i++){
	printf("%c", re[i]);
	}*/
}
