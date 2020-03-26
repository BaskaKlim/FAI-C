/**********************************
 *
 * Ucebnice_jazyka C        ver. 1.0
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
char2 = getchar();

//vypis znak / vo vnutri podmieneny vyraz ak je c<d vypis c inak vypis d
putchar((char1<char2)? char1: char2);

return 0;
}



/*another using ternary operator (podmieneny vyraz) ? vyraz1 : vyraz2
i = (k==2) ? 1:3;
printf("i=%d j=%d k=%d", i,j,k);
(i==1) ? i++ : j++;
printf("i=%d j=%d k=%d", i,j,k);

*/
