/*********************

TODO: program precte 3
double cisla a vypise
ich soucet

*********************/

#include <stdio.h>

int main(){

//definovanie premennej a suboru
int a,b,c,sucet;
FILE *fr;
// optvorenie suboru (meno, typ)
fr= fopen("demo.txt","r");
//nacitanie znakov cez fscanf podobnej ako scanf ale najprv ma deklarovany file, z ktoreho cita
fscanf(fr,"%d %d %d",&a,&b,&c);
printf("%d,%d,%d ",a,b,c);

//TODO: vypocitaj sucet a vypis ho
sucet = a+b+c;
printf("%d\n",sucet);

//zatvorenie suboru a ukoncenie
fclose(fr);
return 0;



}
