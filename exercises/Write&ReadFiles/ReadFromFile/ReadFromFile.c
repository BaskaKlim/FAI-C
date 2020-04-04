/*********************

TODO: program precte 3
double cisla a vypise
ich soucet

*********************/

#include <stdio.h>

int main(){

//definovanie premennej a suboru

FILE *fr;
int a,b,c;
int sum;

// optvorenie suboru (meno, typ)
fr= fopen("data.txt","r");
//nacitanie znakov cez fscanf podobnej ako scanf ale najprv ma deklarovany file, z ktoreho cita
fscanf(fr, "%d,%d,%d,", &a,&b,&c);
//check riadok, lebo mi posledne cislo nacitavalo v zlej hodnote, zistujem ake udaje sa nacitali do premennek
printf("%d,%d,%d,\n",a,b,c); /**velmi dolezite je dat ciarky medzi %d alebo medzere a v takom formate mat aj file data **/
//TODO: vypocitaj sucet a vypis ho
sum =a+b+c;

printf("%d\n",sum);

//zatvorenie suboru a ukoncenie
fclose(fr);
return 0;



}
