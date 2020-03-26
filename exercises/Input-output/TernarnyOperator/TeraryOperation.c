/**********************************
 *
 * Ucebnice_jazyka C        ver. 3.0
 * str51/ prklad 1)
 * ===============================
 *
 * vypracovala:barbara     marec 2020
 *
 * TODO: program nacita 2 znaky z
 * klavesnice a vypise znak s mensim
 * ordinalnym cislom = ASCII hodnotou
 **********************************/


#include <stdio.h>

int main(){

char znak1,znak2;

printf("nacitaj dva znaky: ");
// chcem aby som mohla zadat oba znaky za sebou a cez , medzi nimi
scanf("%c,%c", &znak1,&znak2 );
//musim pouzit putchar() lebo do nej sa da vlozit podmieneny vyraz, prinff asi nie
putchar((znak1<znak2) ? znak1: znak2);

return 0;
}



/*another using ternary operator (podmieneny vyraz) ? vyraz1 : vyraz2
i = (k==2) ? 1:3;
printf("i=%d j=%d k=%d", i,j,k);
(i==1) ? i++ : j++;
printf("i=%d j=%d k=%d", i,j,k);

*/
