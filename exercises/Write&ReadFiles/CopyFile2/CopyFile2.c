/***********************

TODO: prikaz opuse jeden
riadom zo suboru vratane
znaku novej riadky

***********************/

#include <stdio.h>

int main(){

int c;
FILE *fr;

fr= fopen("data.txt","r");

while((c = getc(fr))!= '\n'){
      putchar(c);
}

      putchar(c);

fclose(fr);
return 0;
}
