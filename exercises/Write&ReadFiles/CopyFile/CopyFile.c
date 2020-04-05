/*********************

TODO: program precita
dva znaky zo suboru a
zapise ich no kopie
suboru

**********************/

#include <stdio.h>
main(){

FILE *fr, *fw;
int c;

fr = fopen("data.txt", "r");
fw = fopen("kopia.txt", "w");

/** podmienka nacitania znakov kym nepride program na koniec riadku vzdy cez != EOF nie '\n'**/
while((c=getc(fr)) != EOF ){
putc(c,fw);
}

fclose(fr);
fclose(fw);
return 0;
}
