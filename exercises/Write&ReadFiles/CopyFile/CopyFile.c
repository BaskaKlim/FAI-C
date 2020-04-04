/*********************

TODO: program precita
dva znaky zo suboru a
zapise ich no kopie
suboru

**********************/

#include <stdio.h>

int main(){
//initialize variables
FILE *fr, *fw;
int c;
//declare and open files
fr= fopen("data.txt","r");
fw = fopen("kopia.txt","w");

//TODO
c= getc(fr); //adding value of first char to variable c
putc(c,fw); // puting c into fw file

fclose(fr);
fclose(fw);

return 0;
}
