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

c = getc(fr);		 /* čítanie prvého znaku */
putc(c, fw);		 /* zápis prvého znaku */

putc(getc(fr),fw);	/* cítanie a zápis druhého znaku */



fclose(fr);
fclose(fw);
return 0;
}
