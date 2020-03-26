/**********************************
 *
 * Ucebnice_jazyka C        ver. 2.0
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

int char1, char2;

printf("nacitaj dva znaky: ");
char1 = getchar();
//druhy znak deklarujem priamo v podmienkovom vyraze
putchar((char1< (char2 = getchar())) ? char1: char2);

return 0;
}



/*another using ternary operator (podmieneny vyraz) ? vyraz1 : vyraz2
i = (k==2) ? 1:3;
printf("i=%d j=%d k=%d", i,j,k);
(i==1) ? i++ : j++;
printf("i=%d j=%d k=%d", i,j,k);

*/
