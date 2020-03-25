#include <stdio.h>

//zadaj 3 realne cisla a vypocitaj aritm.priemer zaokruhleny na dve desariny
int main(){

float o,p,r, aritMean;

printf("Zadaj prve realne cislo: ");
scanf("%f",&o);
printf("\nZadaj druhe realne cislo: ");
scanf("%f",&p);
printf("\nZadaj tretie realne cislo: ");
scanf("%f",&r);

aritMean = (o+p+r) / 3;

printf("Aritmeticky priemer cisel %6.2f %6.2f %6.2f je: %6.2f",o,p,r,aritMean);

}
