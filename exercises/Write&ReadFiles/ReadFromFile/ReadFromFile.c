/*********************

TODO: program precte 3
double cisla a vypise
ich soucet

*********************/

#include <stdio.h>

int main(){

//definovanie premennej a suboru

FILE *fr;
double a,b,c;


fr= fopen("data.txt","r");
//test ci subor obsahuje 3 vstupne hodnoty, fscanf()vracia pocet uspesne precitanych poloziek
if (fscanf(fr, "%lf %lf %lf ", &a,&b,&c)== 3) {

printf("%lf,%lf,%lf,\n",a,b,c); /**velmi dolezite je dat ciarky medzi %d alebo medzere a v takom formate mat aj file data **/

printf("%f\n",a+b+c);
} else
printf("Soubor data.txt neobsahuje 3 realne cisla \n");

fclose(fr);
return 0;



}
